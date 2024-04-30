#include<iostream>
using namespace std;

int FindMax(int num[],int size){
     
     int max = INT8_MIN;

     for(int i=0; i<size;i++){
        if(num[i]>max){
            max=num[i];
        }
     }
     //returning max
    return max;
}

int FindMin(int num[],int size){
     
     int min=INT8_MAX;

     for(int i=0; i<size;i++){
        if(num[i]<min){
            min=num[i];
        }
     }

    //returning min
    return min;
}

int main(){

    int size;
    cin>>size;

    int num[100];

    // Taking an Input from the user
    for(int i=0 ; i<size; i++){
        cin>>num[i];
    }

    cout<<" Maximum element of an Array is : "<<FindMax(num,size)<<endl;
    cout<<" Minimum element of an Array is : "<<FindMin(num,size)<<endl;

    return 0;
}

