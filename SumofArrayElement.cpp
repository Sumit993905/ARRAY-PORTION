#include<iostream>
using namespace std;

int SumOfArrayElement(int arr1[],int size){

    int sum =0;
    for(int i=0; i<size;i++){
        sum=sum+arr1[i];

    }
    return sum;

}


int main()
{

   int size;
   cout<<"Give a size for an Array"<<endl;
   cin>>size;

   int arr1[100];

    cout<<"Now give a Array Element :"<<endl;

   for(int i=0; i<size; i++){
        cin>>arr1[i];
   }

   cout<<"Sum of an Array Element is : "<<SumOfArrayElement(arr1,size)<<endl;

    return 0;
}