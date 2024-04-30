#include <iostream>
using namespace std;

void printArray( int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}

void alternateReverse(int arr[],int n){
    
    int start=0;
    while(start<=n-2){
        swap(arr[start],arr[start+1]);
        start+=2;
        
    }
}


int main() {
    
    int arr[6]={1,2,3,4,5,6};
    
    alternateReverse(arr,6);
    
    printArray(arr,6);
    
    return 0;
}