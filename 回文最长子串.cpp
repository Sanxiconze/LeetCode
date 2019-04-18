#include<stdio.h>
#include<string.h>
#include<string> 
#include<iostream>
#define MaxLen s.size()+1
using namespace std;

string longestPalindrome(string s) {
		if(s.size()<2) return s;
	
    	string str="";
    	bool dp[MaxLen][MaxLen];
    	memset(dp,false,sizeof(dp));
    	
    	for(int i = 1;i<MaxLen;i++){
    		dp[i][i] = true;
    	}
    	for(int i = 1;i<MaxLen-1;i++){
    		if(s[i-1]==s[i]){
    			dp[i][i+1] = true;
    		}

    	}
    	for(int i = 3;i<MaxLen;i++){
    		
    		for(int j = i-2;j>=1;j--){
    			//cout<< "j i£º "<<j<<" "<<i; 
    			if(s[i-1]==s[j-1] && dp[j+1][i-1]== true){
    				dp[j][i]=true;
    				//cout << " true";
    			}
    		//	cout<<endl;
    		}
    	}
    	int maxStrLen = 1;
		int left = 1;
		int right = 1;
    	for(int i = 1; i < MaxLen;i++){
    		for(int j = MaxLen-1 ; j >=i;j--){
    			if(dp[i][j] && j-i+1> maxStrLen){
    				maxStrLen = j-i+1;
    				left = i; right = j;
	   				//cout<<endl;
    				//return str;
    			}
	//			cout<< i << " " << j << " " <<dp[i][j]<<endl;
			}  
    	}
        			for(int a=left-1;a<=right-1;a++){
    					str+= s[a];
    				//	cout<<s[a];
    				}	
    	
    	
     	return str;   
}

int main(){
	string str = longestPalindrome("1234567898765432");
	
	cout<<"str£º"<<str<<endl;
	return 0;
}
