#include<iostream>
#include<vector>
using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}
	return b;
}
int maxSubArray(vector<int>& nums) {
    int subSum[nums.size()];
    subSum[0]=nums[0];
    int maxR = subSum[0] ;
	for(int i = 1;i<nums.size();i++){
    	subSum[i] = max(subSum[i-1]+nums[i],nums[i]);
    	maxR = max(maxR,subSum[i]);
    }
    return maxR;
}

int main(){
	vector<int>a;
	a.push_back(-2);
	a.push_back(1);
	a.push_back(-3);
	a.push_back(4);
	a.push_back(-1);
	a.push_back(2);
	a.push_back(1);
	a.push_back(-5);
	a.push_back(4);
	cout<<maxSubArray(a);
	
	return 0;
} 
