#include <iostream>
#include <string>
#include <vector>
using namespace std;
void input(string &x,string &y){
	cin>>x>>y;
}
int lcs(string x,string y){
	vector<vector<int>> tb(vector<vector<int>>((int)x.size()+1,vector<int>(y.size()+1,0)));
	for(int i=1;i<(int)x.size()+1;i++){
		for(int j=1;j<(int)y.size()+1;j++){
			if(x[i-1]==y[j-1])  tb[i][j]=tb[i-1][j-1]+1;
			else tb[i][j]=max(tb[i-1][j],tb[i][j-1]);
		}
	}
	return tb[(int)x.size()][(int)y.size()];
}
int main(){
	int q;
	cin>>q;
	string x,y;
	for(int i=0;i<q;i++){
		input(x,y);
		cout<<lcs(x,y)<<endl;
	}
	return 0;
}

