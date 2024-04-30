#include <iostream>
using namespace std;

//Brute force approach means simple approach
void compare(int arr[], int brr[], int size1,int size2){

// checking of both the array    
for(int i=0; i<size1;i++){
    for(int j=0; j<size2; j++){
        
        if(arr[i]==brr[j]){
            cout<<arr[i]<<" ";
        }
        
    }   
}
    
}



int main() {
    
    int arr1[4]={2,4,6,8};
    int arr2[4]={2,3,8,6};
    
    compare(arr1,arr2,4,4);

    return 0;
}