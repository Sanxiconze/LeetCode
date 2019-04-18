//买卖股票的最佳时机 II
#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
	int sum = 0;
	int cu = 0;
	bool has = false;
	prices.push_back(0);
	for(int i = 0; i <prices.size()-1;i++){
		if(prices[i]<prices[i+1]){
			if(has == false){
				cu = prices[i];
				has = true; 
			}
		}else if(has != 0){
			sum= sum-cu+prices[i];
			cu = 0;
			has = false;
		} 
		
		
	}
	return sum;   
}
int main(){
	
	vector<int> prices;
	prices.push_back(7);
	prices.push_back(1);
	prices.push_back(5);
	prices.push_back(3);
	prices.push_back(6);
	prices.push_back(4);
	cout<<maxProfit(prices);
	return 0;
}
 
 
