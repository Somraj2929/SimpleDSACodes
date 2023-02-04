#include <bits/stdc++.h>
using namespace std;

bool isPalin(int num){
    long int reverse=0;
    int temp=num;
    if (num < 0 ||(num % 10 == 0 && num != 0)) {
        return false;
    }
    while (temp != 0)
    {
        int last = temp % 10;
        reverse = reverse * 10 + last;
        temp /= 10;
    }

    return (reverse == num);
    
}
int main(){
    int number;
    cin >> number;
    cout << isPalin(number) << endl;
}