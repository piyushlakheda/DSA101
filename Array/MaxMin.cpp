#include<iostream>
using namespace std;


int Max(int arr[], int size){
    int maxi= INT32_MIN;

    
    for(int i=0;i<size;i++){
      maxi=max(maxi, arr[i]);

    }
    return maxi;
}



int Min(int arr[], int size){
    int maxi= INT32_MAX;

    
    for(int i=0;i<size;i++){
      maxi=min(maxi, arr[i]);;    

    }
    return maxi;
}

int main(){


  int size;
  cin>>size;

  int arr[100];

  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

 int max=Max(arr, size);
  int min=Min(arr,size);

  cout<<"Max is" << max<<endl;
  cout<<"Min is"<< min<<endl;
 


    return 0;
}