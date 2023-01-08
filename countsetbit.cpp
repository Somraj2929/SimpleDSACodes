#include<bits/stdc++.h>
using namespace std;

int countSet(int n){
    int res=0;
    while (n>0)
    {
        if (n%2 != 0)
        {
            n=n/2;
            res++;
        }
        
        return res;
        
    }
    
}
int main(){
    int number;
    cin >> number;
    cout << countSet(number);
    return 0;
}