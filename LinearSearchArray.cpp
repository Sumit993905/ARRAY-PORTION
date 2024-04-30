#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
     
     for(int i=0 ; i<size ; i++)
     {
        if(arr[i]==key)
        {
        return 1;
        }
     }
    
    return 0;
}

int main()
{

    int size;
    cout<<"Enter size of an Array :"<<endl;
    cin>>size;

    cout<<"Enter an Array Element :"<<endl;
    
    int arr[100];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    //Enter a Key Element which you want to search
    cout<<"Enter an Element for Search : "<<endl;
    int key;
    cin>>key;

    bool found = search(arr,size,key);

    if(found){
        cout<<"Element is Present , YEAH !";
    }

    else{
        cout<<"OOPs :-Element is not Present. ";
    }
    
    return 0;
}