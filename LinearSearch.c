#include<stdio.h>

int linearSearch(int arr[], int size , int element){
 for(int i=0; i<size ; i++){
     if(arr[i]==element){
         return i;
     }
 }
 return -1;
    

}


int main(){
    int arr[]={1,2,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
     
    
    int element = 8;
    int searchIndex = linearSearch(arr, size, element);

    printf("element is at %d \n", searchIndex);
    return 0;
}