#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

void reverseArray(int arr[], int n){
    int start= 0;
    int end= n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }

}

int main()
{
 
 int arr[6]={2,5,-1,4,7,9};
 int brr[5]={7,4,5,3,8};

// calling a Reverse function 
 reverseArray(arr,6);
 reverseArray(brr,5);

 // calling a print function
 printArray(arr,6);
 printArray(brr,5);



  return 0;  
}