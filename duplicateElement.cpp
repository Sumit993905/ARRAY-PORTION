#include<iostream>
using namespace std;

int FindDuplicateElement(int arr[],int size){

    int ans=0;

    // XOR on all Element 
    for(int i=0; i<size; i++){
        ans= ans^arr[i];
    }

    // XOR  on Range[1,n-1]
    for(int i=1; i<size; i++){
        ans= ans^i;
    }
    return ans;
}

int main(){

int arr[5]={1,2,3,4,4}; //Output : 4

cout<<"Duplicate Element of an Array is : "<<FindDuplicateElement(arr,5);

 return 0;

}