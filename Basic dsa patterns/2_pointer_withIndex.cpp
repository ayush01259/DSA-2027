#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
    int arr[8] = {29, 94, 48, 39, 35, 16, 59, 33};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 110;

    // to make a pair of value and index
    pair<int, int>a[8];

    // storing the value + original index;
    for(int i =0; i<n; i++){
        a[i] = {arr[i], i};
    }

    // sorting the array
    sort(a, a+n);

    int i = 0;
    int j = n-1;

    while(i<j){
        int sum = a[i].first + a[j].first;
        if(sum == target){
            cout<<"Orginial indices : "<<a[i].second << " "<< a[j].second;
            return 0;
        }
        else if(sum>target){
            j--;
        }
        else{
            i--;
        }
    }
    cout<<"No pair matched";
    return 0 ;
}