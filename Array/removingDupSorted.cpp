#include<bits/stdc++.h>
using namespace std;

int remDuplicate(int arr[], int n){
    int res = 1;
    for(int i =1;i<n;i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main() {
    int arr[] = {1,2,2,2,3,4,4,5,5,5}; //array must be sorted
    int n=10;

    int m = remDuplicate(arr, n);

    for(int i=0;i<m;i++){
        cout << arr[i] << " ";
    } 
    
}