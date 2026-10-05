#include<iostream>
using namespace std;
int main(){
int arr[6] = {10,20,30,20,10,40};
int new_arr[6] ;
int k =0;
int n = sizeof(arr)/sizeof(arr[0]);
bool repeat[6] = {false};
    for(int i = 0; i<n; i++){
        
        if(repeat[i]== true){
            continue;
        }
        
        for(int j = 0; j<n ; j++){
            if(arr[j] == arr[i]){
                repeat[j] = true;
            }
        }
        new_arr[k] = arr[i];
        k++;
    }  
    cout<<"Array after removing duplicates : ";
    for (int i = 0; i<k ; i++){
        cout<<new_arr[i]<<" ";
    }
    return 0 ;
}