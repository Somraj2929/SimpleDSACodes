#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[], int n){
    int curr_leader =  arr[n-1];
    vector<int> ans;
    ans.push_back(curr_leader);
    for(int i= n-2;i>=0;i--){
        if( curr_leader < arr[i]){

            curr_leader = arr[i];
            ans.push_back(curr_leader);
        }
    }

    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    
}

// void reverse(int arr[], int n){
//     int low=0, high = n-1;
//     while( low<high ){
//         swap(arr[low],arr[high]);
//         low++;
//         high--;
//     }
// }



int main() {
    int arr[]= {10,1,8,3,6,5,7};
    int n=7;
    leaders(arr, n);
    
    

}