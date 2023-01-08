#include <bits/stdc++.h>
using namespace std;


 int gcd(int a, int b)
{
	if(b==0)
		return a;

	return gcd(b, a % b);
}


int lcm(int a, int b){
    // int result=max(a,b);
    // while(true){
    //     if(result%a==0 && result%b==0){
    //         return result;
    //     }
    //     result++;
    // }
    // return result;
    
    //optimised approach
    return (a * b / gcd(a,b));

}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    cout << lcm(num1, num2);
}