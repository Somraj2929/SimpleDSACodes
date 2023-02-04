#include<bits/stdc++.h>
using namespace std;


void reverseArr(int arr[], int low, int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}


void leftRotatebyD(int arr[], int n, int d){
    // int temp[d]; 
    // for(int i = 0; i < d;i++){
    //     temp[i]=arr[i];
    // }
    // for(int i=d; i < n;i++){
    //     arr[i-d] = arr[i];
    // }
    // for(int i=0;i < d;i++){
    //     arr[n-d+i] = temp[i];
    // }

    reverseArr(arr, 0, d-1);
    reverseArr(arr, d, n-1);
    reverseArr(arr, 0, n-1);
}




int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;
    leftRotatebyD(arr,n,2);
    for(int i=0;i < n;i++){
        cout << arr[i] << " ";
    }
}