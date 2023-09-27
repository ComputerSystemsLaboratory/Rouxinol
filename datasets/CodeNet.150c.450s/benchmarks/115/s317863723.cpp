#include <iostream>
#include <string>
#include <algorithm>
#define N 1000
using namespace std;

int lcs(string S1,string S2){
	int c[N+1][N+1];
	int S1_size = S1.size();
	int S2_size = S2.size();
	
	for(int i=1;i<S1_size;i++) c[i][0] = 0;
	for(int i=1;i<S2_size;i++) c[0][i] = 0;
	
	S1 = ' '+S1;
	S2 = ' '+S2;
	
	int max_lcs=0;
	for(int j=1;j<=S1_size;j++){
		for(int k=1;k<=S2_size;k++){
			if(S1[j]==S2[k]){
				c[j][k] = c[j-1][k-1] + 1;
			}else{
				c[j][k] = max(c[j-1][k],c[j][k-1]);
			}
			max_lcs = max(max_lcs,c[j][k]);
		}
	}
	return max_lcs;
}

int main() {
	// your code goes here
	int q;
	string str1,str2;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>str1>>str2;
		cout<<lcs(str1,str2)<<endl;
	}
	return 0;
}