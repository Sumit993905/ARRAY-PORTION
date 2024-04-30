#include<iostream>
using namespace std;

void update(int arr[], int n)
{

    // updating an Array 
    //  NOTE: Please Don't  update an array in the function scope 
    //        Because it will update the main array .
    arr[0]=10;

    //printing an array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    // Initializing an Array

    int arr[3]={1,2,3};

    int n=3;

    //calling an Array
    update(arr,n);

    //Printing an Array by using For Loop 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }

    return 0;

}