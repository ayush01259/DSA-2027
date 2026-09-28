#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    int arr[7] = {12, 93, 23, 20, 49, 39, 84};
    int n = sizeof(arr)/ sizeof(arr[0]);
    sort(arr, arr+n);
    int target = 51;
    int i = 0; 
    int j = n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            cout<<arr[i]<<" + "<<arr[j]<< " = "<<target;
            return 0;
        }
        else if (arr[i]+arr[j]>target){
            j--;
        }else{
            i--;
        }
    }
    cout<<"Nothing matching";
    return 0;
}