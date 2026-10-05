#include<iostream>
using namespace std;

int main(){
int arr[6] = {10, 20, 20, 10, 50, 20};
int n = sizeof(arr)/sizeof(arr[0]);
bool visited[6] = {false};
for(int i = 0; i<n; i++){
    if(visited[i] == true){
        continue;
    }
    int count = 0;
    for(int j =0; j<n; j++){
        if(arr[j]==arr[i]){
            count++;
            visited[j] = true;
        }
    }
    cout<<arr[i]<<" Occurs "<<count<<" times."<<endl;;
}
    return 0 ;
}