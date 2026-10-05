#include<iostream>
using namespace std;
int main(){
    int arr[8] = {10,20,30,10,20,50,20,10};
    
    int count = 0;
    int target = 20;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++){
        
            if(arr[i]==target){
                
                count ++;
               
            }
        }

if(count>1){
    cout<<"There are duplicates of "<<target<<" and total duplicates are "<<count-1<<" ."<<endl;
}else{
    cout<<"Nothing";
}
return 0;
}
    