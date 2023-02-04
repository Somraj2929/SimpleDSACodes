#include <bits/stdc++.h>
using namespace std;

// bool isPrime(int num){
//     if(num<2){
//         return false;
//     }
//     for(int i=2;i*i<num;i++){
//         if(num%i==0){
//             return false;
//         }
        
//     }
//     return true;
// }

//effecient for large numbers.
 bool isPrime(int n)
{
	if(n==1)
		return false;

	if(n==2 || n==3)
		return true;

	if(n%2==0 || n%3==0)
		return false;

	for(int i=5; i*i<=n; i=i+6)
	{
		if(n % i == 0 || n % (i + 2) == 0)
			return false; 
	}

	return true;
}

int main(){
    int x;
    cin >> x;
    cout << ("%s", isPrime(x) ? "true" : "false");
}