#include<iostream>
using namespace std;
int main(){
 int arr[7] = {14, 5, 69, 9, 99, 39, 10};
 int min = arr[0];
 int index = 0;
 for(int i = 0; i<7; i ++){
    if(arr[i]<min){
        min = arr[i];
        index = i;

    }
 }
 cout<<"The smallest element in this array is "<< min <<" at the index of "<<index << endl;

    return 0;
}