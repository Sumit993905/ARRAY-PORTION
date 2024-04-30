#include<iostream>
using namespace std;

int FindUniqueElement(int arr[],int size){
    int ans=0;

    for(int i=0; i<size; i++){

        ans= ans^arr[i]; //Using XOR method
    }

    return ans;

}

int main(){

    int arr[7]={1,2,3,1,6,3,6};

    cout<<"Unique Element in the Array is : "<<FindUniqueElement(arr,7);

    return 0;
}