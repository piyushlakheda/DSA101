#include<iostream>
using namespace std;


void prinArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sum(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

    return sum;
}

int main(){

    int arr[100];
    int size;
    cin>>size;
    for(int  i=0;i<size;i++){
        cin>>arr[i];
    }
    prinArray(arr,size);
    cout<<sum(arr,size);

    




    
}