#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
    int low=0, high= n-1;
    while(low < high){
        // int temp=arr[low];
        // arr[low] = arr[high];
        // arr[high] = temp;
        swap(arr[low], arr[high]);
        low++;
        high--;
    }

}


int main(){
    int arr[]={10,20,50,70,90};
    int n=5;
    reverseArray(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}