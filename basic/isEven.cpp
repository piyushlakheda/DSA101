#include<iostream>
using namespace std;


 bool isEven(int a){
    if(a&1){
        return 0;
    }
    return 1;
   }

    int main(){

        int a;
        cin>>a;

        int ans=isEven(a);

        
        if(ans==0){
            cout<<"odd";
        }
        else{
        cout<<"even";
        }
    return 0;
    }


