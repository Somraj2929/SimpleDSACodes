#include<bits/stdc++.h>
using namespace std;

int buySell(vector<int>& stocks){
    int n= stocks.size();
    int maxProfit=0;
    for (int i=0;i<n;i++){
        if(stocks[i]>stocks[i-1]){
            maxProfit = maxProfit + stocks[i]- stocks[i-1];
        }
    }
    return maxProfit;
}

int main(){
    vector<int> stocks = {1, 5, 3, 8, 12};
    int profit = buySell(stocks);
    cout << profit;
    
}