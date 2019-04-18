#include<bits/stdc++.h>
using namespace std;
    int minDeletionSize(vector<string>& A) {
       // int Asize = A.size();
      //  int Aisize = A[0].size();
        char c;
        int sum=0;
		for(int j = 0; j < A[0].size();j++){
			c = A[0][j];
			for(int i = 1;i <A.size();i++){
				if(c>A[i][j]){
					sum++;
					break;
				}
				else{
					c = A[i][j];
				}
			}	
		}

        return sum;
    }
int main(){
	vector<string> A;
	A.push_back("zyx");
	A.push_back("wvu");
	A.push_back("tsr");
	cout<<minDeletionSize(A);
	return 0;
}
