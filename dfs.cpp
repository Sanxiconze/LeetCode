#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

	char ch;
	int n,m;
	cin>>n>>m;
	int map[1000][1000];
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=m; j++)
		{
			cin>>ch;
			map[i][j] = ch-'0';
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j < m; j ++){
			
			cout<<map[i][j];
		}
		cout<<endl;
	}
	 
	
	return 0;
}
