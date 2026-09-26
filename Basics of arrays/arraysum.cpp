#include<iostream>
using namespace std;
int main(){
    int arr[5] = {13, 54, 35, 49, 29};
    int sum = 0;
    for(int i = 0; i<5; i++){
        sum +=arr[i];
    }
    cout<<"The sum of this array is "<<sum<<endl;
    

    return 0;
}