#include<bits/stdc++.h>
using namespace std;


// using left shift
void kthBit(int n, int k){
    if (n & (1<<(k-1)))
    {
        cout<<"SET"<<endl;
    }
    else{
        cout<<"NOT SET"<<endl;
    }
    
}

// using right shift

void iskthBit(int n, int k){
    if (((n>>(k-1)) & 1)==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


int main()
{
    int n=5,k=3;
    kthBit(n,k);
    iskthBit(n,k);
    return 0;
}