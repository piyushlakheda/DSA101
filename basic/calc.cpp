#include<iostream>
using namespace std;

int main(){

    int a,b;
    char op;
    cin>>a>>b;
    cin>>op;

    switch(op){
        case '+':
           cout<<a+b;
           break;
        case '-':
           cout<<a-b;
           break;
        case '*':
           cout<<a*b;
           break;
        case '/':
           cout<<a/b;
           break;

        default :
           cout<<"invaid operator";            
    }



    return 0;
}