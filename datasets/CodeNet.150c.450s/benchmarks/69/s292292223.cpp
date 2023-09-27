#include<iostream>
#include<vector>
#include<stack>

#define rep(i,a) for(int i=0;i<(a);i++)
using namespace std;

vector<int> in;


bool check(vector<int> r,vector<int> l){
	int lenr=r.size(),lenl=l.size();
	for(int i=1;i<lenr;i++){
		if(r[i]<=r[i-1])return false;
	}	
	for(int i=1;i<lenl;i++){
		if(l[i]<=l[i-1])return false;
	}
	return true;
}

bool dfs(vector<int> r,vector<int> l,int num){
	if(!check(r,l))return false;
	if(num==10)return true;

	r.push_back(in[num]);
	if( dfs(r,l,num+1) )return true;
	r.pop_back();

	l.push_back(in[num]);
	if( dfs(r,l,num+1) )return true;
	l.pop_back();

	return false;
}



int main(){
int N;
	cin>>N;
	rep(roop,N){
        while(in.size())in.pop_back();
		rep(i,10){
			int tmp;
			cin>>tmp;
			in.push_back(tmp);
		}
		if(dfs({},{},0))	cout<<"YES"<<endl;
		else		cout<<"NO"<<endl;	
	}
	return 0;
}
	