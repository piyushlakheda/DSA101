#include<iostream>
using namespace std;

int main(){

    int h,f,t,o;
    int amt;
    cin>>amt;

    switch(1){
        case 1: 
          h=amt/100;

          cout<<h<<endl;
          amt=amt-(h*100);
        case 2:
          if(amt>50){
            f=amt/50;
          }
          else{
            f=0;
          }
          cout<<f<<endl;
          amt=amt-(f*50);
        case 3:
          if(amt>20){
            t=amt/20;
          }
          else
          {
            t=0;
          }
          cout<<t<<endl;
          amt=amt-(t*20);

         case 4:
          if(amt>=1){
            o=amt;
          }
          else{
            o=0;
          }
         
         cout<<o;

            
    }

    return 0;
}