#include<iostream>
using namespace std;

// printing an array by using function 

void printArray(int arr[], int size){

    cout<<"Printing an array"<<endl;

    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<"  ";
}
cout<<"Printing DONE"<<endl;
}

int main()
{
    // Declare an array

    int num[15]={0}; 

    // accessing an array
    cout<<"Num at 12 location : "<<num[11]<<endl;

    // Initializing an Array

    int Number[5]={2,3,4,5,6};

     // accessing an array

   cout<<"Number at 5 location : "<<Number[4]<<endl;

     // Initializing an Array
   int Third[10]={1,2,3,4,5,6,7,8,9,10};

   int n=10;

   cout<<"Printing an array"<<endl;

      // accessing  the whole array by using "for loop"
   for(int i=0; i<n;i++){
        cout<<Third[i]<<"  ";
   }
   cout<<endl;

  // Initializing an Array  
  int forth[12]={1,2,3,4,5,6,7,8,9,10,11,12};
  printArray(forth,12); // array call  by using function 

    return 0;
}
