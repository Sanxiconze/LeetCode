#include<iostream>
#include<vector>
using namespace std;
   
    int min(int a,int b){
        if (a<b)return a;
        return b;
    }
    int minCostClimbingStairs(vector<int>& cost) {
    	cost.push_back(0);
    	int dp[100];
    	dp[0] = cost[0];
    	dp[1] = cost[1];
    	for(int i =2;i<cost.size();i++){
    		dp[i] = min(dp[i-1]+cost[i],dp[i-2]+cost[i]);
    	}
    
	    return dp[cost.size()-1];
        
    }
    
    int main(){
    	vector<int> a;
    	a.push_back(1);
    	a.push_back(100);
    	a.push_back(1);
    	a.push_back(1);
    	a.push_back(1);
    	a.push_back(100);
    	a.push_back(1);
    	a.push_back(1);
    	a.push_back(100);
    	a.push_back(1);
    	cout<<minCostClimbingStairs(a);
    	return 0;
    }
