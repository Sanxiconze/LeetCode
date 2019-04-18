#include<stdio.h>
#include<iostream>
using namespace std;
int n,m;
int xm[1001];
int ym[1001];
char map[1001][1001]; 
int num = 0;
void dfs(int i,int j, int n, int m ){
	map[i][j] = '0';
	if(xm[i] == 0){
		xm[i]=1;
		for(int a = 0;a<m;a++) {
			if(map[i][a] == '1'){
				dfs(i,a,n,m);
			}
		}
	}
	if(ym[j] == 0){
		ym[j]=1;
		for(int b = 0;b<n;b++) {
			if(map[b][j] == '1'){
				dfs(b,j,n,m);
			}
		}
	}
}
int main(){
	cin>>n>>m;	
	for(int i = 0;i<n;i++){
		scanf("%s",&(map[i]));
		xm[i] = 0;
	}
	for(int j = 0;j<m;j++){
		ym[j] = 0;
	}
	
	//cout<<endl;
	for(int i = 0;i<n;i++){
		for(int j = 0;j < m; j ++){
			if(map[i][j] == '1'){
				dfs(i,j,n,m);
				num++;
			}
			//cout<<map[i][j];
		}
		//cout<<endl;
	}

	cout<< num;
	return 0;
}
