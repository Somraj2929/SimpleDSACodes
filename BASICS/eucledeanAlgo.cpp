#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    //solution using while loop 
    // while(a != b){
    //     if (a > b){
    //         a = a - b; 
    //     }
    //     else{
    //         b = b - a;
    //     }
    
    // }
    // return a;

    //optimised eucleidean algo 
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    cout << gcd(num1,num2) << endl;
}