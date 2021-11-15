#include<iostream>
using namespace std;

int main(){

    int a[5];
    for(int i=0;i<5;i++){
     cin>>a[i];
    }
    
    int largest=a[0];

    for(int i=0;i<5;i++){
        if(a[i]>largest){
            largest = a[i];
       }
      
    }
     cout<<"largest is:"<<largest;
    return 0;

}