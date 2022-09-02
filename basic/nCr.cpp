#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}


int nCr(int n,int r){
    int N=fact(n);
    int R=fact(r);
    int D= fact(n-r);

    int ans=N/(R*D);
    return ans;

}


int main(){

    int n,r;
    cin>>n>>r;
   
    int ans=nCr(n,r);
    cout<<ans;
    return 0;
}