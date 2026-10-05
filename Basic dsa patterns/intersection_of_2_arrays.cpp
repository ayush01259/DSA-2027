// here we are going to see common elements in both array
#include<iostream>
using namespace std;

int main(){
    int A[] = {1,2,3,4,5};
    int B[] = {3,4,5,6,7};
    
    int n = sizeof(A)/sizeof(A[0]);
    int n2 = sizeof(B)/sizeof(B[0]);
    for(int i =0; i<n; i++){
        bool similar = false;
        for(int j =0; j<n2 ; j++){
            if(A[i] == B[j]){
                similar = true;
                break;
            }
        }
        if(similar == true){
        cout<<"The similar elements in both array's are "<<i<<" ";
        
        }
    }
   
    return 0;
}