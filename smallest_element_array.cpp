#include<iostream>
using namespace std;

int main(){

    int a[5];
    for(int i=0;i<5;i++){
     cin>>a[i];
    }
    
    int smallest=a[0];

    for(int i=0;i<5;i++){
        if(a[i]<smallest){
            smallest = a[i];
       }
      
    }
     cout<<"smallest is:"<<smallest;
    return 0;

}