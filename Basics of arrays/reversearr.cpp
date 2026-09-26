#include<iostream>
using namespace std;

int main(){
    int arr[8] = {12, 93, 23, 20, 49, 39, 84, 75};
    int left = 0;
    int right = 7;
    while(right > left){
        int temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;
        left++;
        right--;
    }

    for(int i =0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}