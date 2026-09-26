#include<iostream>
using namespace std;
int main(){
 int arr[7] = {14, 25, 69, 29, 99, 39, 20};
 int target = 39;
 bool found = false;
 int index = -1;
 for(int i = 0; i<7; i ++){
    if(arr[i]==target){
       found = true;
        index = i;
        break;
    }
 }
 if(found){
    cout<<"The target is found at the index of "<<index<<endl;
 }else{
    cout<<"Not available";
 }


    return 0;
}