#include <bits/stdc++.h>
using namespace std;

// int factorial(int n){
//     int result = 1;
//     for(int i = 2; i <= n;i++){
//         result = result * i;
    
//     }
//     return result;
// }

int factorial(int n){
    if(n < 0){
        cout << "Wrong Input" << endl;
        return 0;
        
    }
    if(n == 0){
        return 1;
    }
    return n* factorial(n-1);
}
int main(){
    int number;
    cin >> number;
    cout << factorial(number) << endl;
    return 0;
}