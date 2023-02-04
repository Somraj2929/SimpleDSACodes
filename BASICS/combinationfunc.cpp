#include <bits/stdc++.h>
using namespace std;


int factOfNum(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n, int r){
    int numer=factOfNum(n);
    int denom=factOfNum(r)*factOfNum(n-r);
    int ans = numer/denom;
    return ans;
}

int main(){
    int n,r;
    cin >> n >> r;
    factOfNum(n);
    nCr(n,r);
    cout << nCr(n,r) << endl;

}