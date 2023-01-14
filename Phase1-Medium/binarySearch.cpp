#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;

    int mid = start + (end-start)/2;
    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        
        //move to right part
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    
    return -1;
}

int main() {
    int even[6]={2,4,6,8,12,14};
    int odd[5]={3,5,11,14,17};

    cout << binarySearch(even, 6, 12) << endl;
    cout <<binarySearch(odd, 5, 12) << endl;

    return 0;
}

int findPeak(int arr[], int n) {

    int s =0, e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        //cout<<" s " << s <<" e " << e << endl;
        if(arr[mid] < arr[mid+1]){
            s = mid+1; 
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}