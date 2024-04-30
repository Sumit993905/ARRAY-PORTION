

#include <bits/stdc++.h>
#include<vector>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

void movesZeroes(int arr[], int n){
    int i = 0;

    for(int j=0; j<n; j++){
        if(arr[j] != 0){
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

int main(){
    
    int arr[5]={0,1,0,3,12};
    movesZeroes(arr,5);
    printArray(arr , 5);
    
    
    
    
    return 0;
}