#include<bits/stdc++.h>
using namespace std;

int trapping(vector<int>& arr){
    int n = arr.size();
    int left[n];
    int right[n];
    int trapWater=0;
    left[0]=arr[0];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i =n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }

    for ( int i=1;i<n;i++){
    int var = min(left[i - 1], right[i + 1]);        
    if(var > arr[i]){
            trapWater += var - arr[i];
        }
    }
    return trapWater;
}

int main(){
    vector<int> arr= {6,3,4,5,9,2,10};
    cout << trapping(arr);

}