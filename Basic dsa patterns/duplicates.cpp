#include<iostream>
using namespace std;
int main(){
    int arr[6] = {10,20,30,40,20,50};
    bool found = false;
    for(int i =0; i<6; i++){
        for(int j = i+1; j<6; j++){
            if(arr[i]==arr[j]){
                found = true;
            }
        }
    }
    if(found){
        cout<<"There's a duplicate";
    }else{
        cout<<"There's no duplicate";
    }
    return 0;
}