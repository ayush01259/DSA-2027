#include<iostream>
using namespace std;

int main(){
    int arr[6] = {10,20,30,40,50,60};
   
   int n = sizeof(arr)/sizeof(arr[0]);
   int k = 3;
   for(int rotation = 0; rotation<k; rotation++ ){
    int temp = arr[0];
  
    for(int i = 0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
        }
    for(int j = 0; j<6; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}