// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int arr[], int n , int m){
    
    int s = m+1;
    int e = n-1;
    
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
    
}

int main() {
    
    int arr[8]={3,6,2,1,8,7,4,9};
    int m;
    
    cout<<"Enter the no , then after that Array is reversed : "<<endl;
    cin>>m;
    
    reverseArray(arr , 8 , 3);
    printArray(arr,8);
   
   
   return 0;
}
