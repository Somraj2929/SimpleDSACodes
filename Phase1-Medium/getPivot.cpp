#include<bits/stdc++.h>
using namespace std;

int getPivot(vector<int>&arr, int n){
    int s=0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    vector<int> arr={8,9,1,2,4};
    cout << "Pivot element: "<<getPivot(arr, 5);
    return 0;

}