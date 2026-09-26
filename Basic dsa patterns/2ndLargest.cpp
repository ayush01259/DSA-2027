#include<iostream>
using namespace std;


// 1st approach 
int main(){
//     int arr[8] = {29, 59, 28, 48, 23, 49, 84, 99};
//     int max = arr[0];
//     int max2nd = arr[0];
//     for(int i =0;i<8;i++){
//         if(arr[i]>max){
//             max=arr[i];
//             for(int i =0; i<8 ; i++){
//             if(arr[i]>max2nd&&arr[i]<max){
//                 max2nd=arr[i];
//             }
//         }
//     }
// }
//     cout<<"Largest = "<<max<<endl;
//     cout<<"2nd largest = "<<max2nd<<endl;



// 2nd approach (better way)
    int arr[8] = {29, 59, 20, 58, 79,34,89,35};
    int max = arr[0];
    int secmax = arr[0];
    for(int i =0; i<8 ; i++){
        if(arr[i]>max){
            secmax = max; 
            max = arr[i];
        }else if (arr[i]>secmax)
        {
            secmax = arr[i];
        }
        
    }
    cout<<"The largest element in the array is "<<max<<endl;
    cout<<"The second largest element in the array is "<<secmax<<endl;
    return 0;
}
