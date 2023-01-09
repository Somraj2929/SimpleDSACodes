#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key){
    for ( int i = 0; i < size; i++ ){
        if ( arr[i] == key ){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10]={1,12,13,14,21,32,43,54,56,78};
    cout << "Enter the number to search" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if(found){
        cout << "Found " << key << endl;
    }
    else{
        cout << "Failed to find " << key << endl;
    }
}