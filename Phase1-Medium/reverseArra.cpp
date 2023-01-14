#include<bits/stdc++.h>
using namespace std;

// void reverse(int arr[], int num){
//     int start =0;
//     int end = num-1;

//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
   
// }
void reverse1st(int arr[] ,int num ){
    for(int i=0; i<num/2; i++){
        swap(arr[i],arr[num-1-i]);
    }
}
void reverse2nd(int arr[] ,int num ){
    reverse(arr, arr+num);
}

void printArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main(){
    int arr[6]={0,1,2,3,4,5};
    int brr[5]={0,1,2,3,4};

    // reverse(arr,6);
    // reverse(brr,5);
    reverse2nd(arr,6);
    reverse1st(brr,5);

    printArray(arr,6);
    printArray(brr,5);
}