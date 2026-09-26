#include<iostream>
using namespace std;
int main(){
 int arr[7] = {14, 25, 69, 29, 99, 39, 20};
 int max = arr[0];
 int index = -1;
 for(int i = 0; i<7; i ++){
    if(arr[i]>max){
        max = arr[i];
        index = i;

    }
 }
 cout<<"The largest element in this array is "<< max <<"at the index of "<<index << endl;

    return 0;
}