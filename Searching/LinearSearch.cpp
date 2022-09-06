#include<iostream>
using namespace std;

int linearsearch(int arr[], int key,int size){
    for(int i=0;i<size; i++){
        if(arr[i]==key){
            return i;

        }
        
    }
    return 0;
    
}

int main(){
  
  int arr[5]={1, 4,5,3,2};
  int key;
  int size=5;
  cin>>key;
  
  int found;
  found=linearsearch(arr, key,size);

  if(found==0){
    cout<<"absent";
  }
  else{
  cout<<found;
  }

    return 0;
}