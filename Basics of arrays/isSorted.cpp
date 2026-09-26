#include<iostream>
using namespace std;

int main(){
    int arr[8] = {12, 93, 23, 20, 49, 39, 84, 75};
    bool sorted = true;
    for(int i = 0; i<8; i++){
        if(arr[i]<arr[i-1]){
            sorted = false;
        }
    }
    if(sorted){
        cout<<"The array is sorted"<<endl;
    }else{
        cout<<"Not sorted";
    }
    return 0;
}