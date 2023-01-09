#include<bits/stdc++.h>
using namespace std;

int getMinimum(int num[], int n){
    int mini = INT_MAX;
     
    for(int i=0;i<n;i++){
        mini = min(mini,num[i]);
        // if(num[i] < min){
        //     mini = num[i];
        // }
    }
    return mini;
}

int getMax(int num[], int n){
    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        maxi= max(maxi,num[i]);
        // if(num[i] > max){
        //     maxi = num[i];
        // }
    }
    return maxi;
}

int main(){
    int size;
    cin >> size;
    int arr[100];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << "Max value is "<<getMax(arr,size)<<endl;
    cout << "Min value is "<<getMinimum(arr,size) << endl;
}