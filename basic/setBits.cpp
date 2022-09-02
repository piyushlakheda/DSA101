#include<iostream>
using namespace std;

int main(){

    int n;
    int count=0;
    cin>>n;
    
  while(n!=0){
    int a=n&1;
    if(a==1){
        count+=1;
    }
    n=n>>1;
  }
   cout<<count;

    return 0;
}