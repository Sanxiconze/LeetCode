#include<bits/stdc++.h> 
using namespace std;
     bool canJump(vector<int>& nums) {
     	int summ = 0; 
        int numsSize = nums.size();
        int maxStep[numsSize] ;
        for(int i = 0;i < numsSize;i++){
			maxStep[i]= i + nums[i];
        }
        int index = 0; 
        while(nums[index] != 0 && maxStep[index] <numsSize-1){
        	
			int maxIndex= index+1; 
        	int maxIndexStep = maxStep[index + 1] ;
			for(int i = index +1;i <= maxStep[index];i++){
				if(maxIndexStep<maxStep[i]){
					maxIndex = i;
					maxIndexStep = maxStep[i]+1;
				}
			}
			
			
			index = maxIndex;
			summ++;
		} 
        if(maxStep[index] == index && index <numsSize -1){
        	return false;
        }  
		if(index < numsSize -1){
			summ ++;
		}
		cout<<summ;
        return true;
    }
int main(){
	
	vector<int> prices;
	prices.push_back(2);
	prices.push_back(3);
	prices.push_back(1);
	prices.push_back(1);
	prices.push_back(4);
	cout<<endl<<canJump(prices);
	return 0;
}

