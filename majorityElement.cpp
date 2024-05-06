#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v){
    
    int c1 = 0;
    int el;
    for(int i=0; i<v.size(); i++){
        if(c1 == 0){
            c1 = 1;
            el = v[i];
        }
        else if(v[i]==el){
            c1++;
        }
        else{
            c1--;
        }
        int c2 = 0;
        for(int i=0 ; i<v.size() ; i++){
            if(v[i] == el){
                c2++;
            }
        }
        if(c2 > v.size() / 2){
                return el;
       }
    }
    return -1;
}
    
   int main(){
        
   vector<int> v{2 ,2, 1, 3, 1, 1, 3, 1, 1};
        
   int ans =  majorityElement(v);
        
   cout<<ans;

        return 0;
    }