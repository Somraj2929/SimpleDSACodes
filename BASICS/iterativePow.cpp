#include <iostream>
using namespace std;

int power(int x, int n){
    int res=1;
    while(n>0)
    {
        // If n is odd,
		// multiply
		// x with result
        if(n&1)
            res=(res*x);
        // n must be even now
        x=(x*x); // Change x to x^2
        n=n>>1; // n = n/2
    }
    return res;
}

int main() {
	int x,n;
    cin >> x >> n;
	cout<<power(x,n)<<endl;
	return 0;
}