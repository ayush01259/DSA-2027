#include<iostream>
using namespace std;
int main(){
    int arr[7] = {0, 5, 0, 3, 8, 0 , 2};
    int i =0; 
    int j = 0;
    for(int i = 0; i<7;i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for(int k =0; k<7; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
