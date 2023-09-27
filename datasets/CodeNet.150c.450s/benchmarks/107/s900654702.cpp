#include <iostream>
#include <string>
#include <vector>
using namespace std;
int ed(string x,string y){
	vector<vector<int>> tb(vector<vector<int>>((int)x.size()+1,vector<int>(y.size()+1,0)));
	for(int i=0;i<(int)x.size()+1;i++) tb[i][0]=i;
	for(int i=0;i<(int)y.size()+1;i++) tb[0][i]=i;
	int tmp;
	for(int i=1;i<(int)x.size()+1;i++){
		for(int j=1;j<(int)y.size()+1;j++){
			if(x[i-1]==y[j-1])  tmp=tb[i-1][j-1];
			else tmp=tb[i-1][j-1]+1;
			tb[i][j]=min(tmp,min(tb[i-1][j],tb[i][j-1])+1);
		}
	}
	return tb[(int)x.size()][(int)y.size()];
}
int main(){
	string x,y;
	cin>>x>>y;
	cout<<ed(x,y)<<endl;
	return 0;
}
