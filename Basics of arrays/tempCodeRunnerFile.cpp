#include<iostream>
using namespace std;

int main(){
    int arr[8] = {12, 93, 23, 20, 49, 39, 84, 75};
    int count = 0;
    for(int i = 0; i<8; i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    cout<<count;
    return 0;
}