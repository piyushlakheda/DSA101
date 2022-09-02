#include<iostream>
using namespace std;



int ap(int n){
    int ans;
    ans=(3*n)+7;

    return ans;

}


int main(){

    int n;
    cin>>n;
    int ans=ap(n);
    cout<<ans;
    return 0;
}