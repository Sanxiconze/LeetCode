	//111
	//110
	//101
	
	//222
	//220
	//201
	#include<iostream>
	#include<string.h>
	#include<vector>
	using namespace std;
	int x[4] = {-1,1,0,0};
	int y[4] = {0,0,-1,1};
	int visited[51][51];
	void dfs(vector< vector<int> >& image, int sr, int sc, int newColor,int n,int m,int oldColor){
		if(image[sr][sc]!=oldColor) return ;
		//	cout<<endl<<" sr,sc : "<<sr<<" "<<sc<<" cu color"<<cuColor;	
		visited[sr][sc] = 1;
		image[sr][sc] = newColor;
		for(int i = 0;i < 4;i++){
			int nsr = sr+x[i];
			int nsc = sc+y[i];
			if(!(visited[nsr][nsc] == 1 || nsr<0||nsc<0||nsr>=n||nsc>=m)){
	            dfs(image,  sr+x[i], sc+y[i], newColor,n,m,oldColor);
			}	
		}
	}
	vector<vector<int> > floodFill(vector<vector<int> >& image, int sr, int sc, int newColor) {
		int n = image.size();
		int m = image[0].size();
		memset(visited,0,sizeof(visited));
		int oldColor = image[sr][sc];
	//	cout<<"old Color : "<<oldColor;
		dfs(image, sr, sc, newColor,n, m,oldColor);
		return image;	        
	}
	
	int main() {
		vector<vector<int> > image;
		vector<vector<int> > a;
		vector<int> row;
		row.push_back(1);
		row.push_back(1);
		row.push_back(1);
		image.push_back(row);
		row.clear();
		row.push_back(1);
		row.push_back(1);
		row.push_back(0);
		image.push_back(row);
		row.clear();
		row.push_back(1);
		row.push_back(0);
		row.push_back(1);
		image.push_back(row);
		
		
		for(int i = 0;i<image.size();i++){
			for(int j = 0;j<image[0].size();j++){
				cout<<image[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;cout<<endl;	
		a = floodFill(image,1,1,2);
		cout<<endl;
		cout<<endl;
		
		for(int i = 0;i<a.size();i++){
			for(int j = 0;j<a[0].size();j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		
		
		return 0;
	}
