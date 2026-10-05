#include<iostream>
using namespace std;
int main(){

  int arr[] = {1,2,4,5,6};
  int n= sizeof(arr)/sizeof(arr[0]);

  for(int i =1; i<=n+1; i++){
    bool missing = false;
    for(int j =0; j<n; j++){
        if(arr[j]==i){
            missing = true;
            break;
        }
    }
    if(missing == false){
        cout<<"The number "<<i<<" is missing."<<endl;
    }
  }
    return 0;
} 

