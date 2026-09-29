// it is a left rotation logic
#include<iostream>
using namespace std;

void reverse(int arr[], int left, int right){
    while(left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
};

int main(){
    int arr[6] = {10,20,30,40,50,60};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = n-1;

    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    reverse(arr, 0, n-1);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

