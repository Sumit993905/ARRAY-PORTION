#include<iostream>
#include <vector>
using namespace std;

FindArrayIntersection(int arr1[] , int n , int arr2[], int m)
{
    int i=0 , j=0 , ans ;
    


    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
          ans+=arr1[i];
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;

}

int main(){
     int arr1[5]={1,2,3,4,5};
     int arr2[4]={1,8,9,4};

    cout<<"Intersection Element of an Array is : "<<FindArrayIntersection(arr1,5,arr2,4);



    return 0;
}

