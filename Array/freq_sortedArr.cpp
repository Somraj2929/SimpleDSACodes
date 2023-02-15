#include <bits/stdc++.h>
using namespace std;

void findFreq(vector<int>& arr){
    int n= arr.size();
    int freq = 1;
    for (int i=1;i<n;i++){
        if (arr[i]==arr[i-1]) freq++;
        else{
            cout << "Frequency of " <<arr[i-1]<<" is : "<<freq<<endl;
            freq=1;
        }
    }
    cout << "Frequency of "<<arr[n-1]<<" is : "<<freq<<endl;
}

int main(){
    vector<int> arr = {1,1,1,2,2,3,4,4,5,6,6,6};
    findFreq(arr);
}