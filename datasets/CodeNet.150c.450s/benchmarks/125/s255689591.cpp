#include<iostream>
#include<vector>
using namespace std;
int cnt=1;
void depth(vector< vector<int> > &vv,vector<int> &f,vector<int> &c,int num){
	
	f[num]=cnt;
	cnt++;
	
	for(int i=0; i<vv[num].size(); i++){
		if(vv[num][i]!=0 && f[i]==0){
			depth(vv,f,c,i);
		}
	}

	c[num]=cnt;
	cnt++;

}
int main(){
	int n;
	cin>>n;
	vector< vector<int> > v(n,vector<int> (n,0));
	vector<int> ft(n,0);
	vector<int> ct(n,0);
	int u[n];
	for(int i=0; i<n; i++){
		int k;
		cin>>u[i]>>k;
		for(int j=0; j<k; j++){
			int x;
			cin>>x;
			v[i][x-1]=1;
		}
	}
	for(int i=0; i<n; i++){
		if(ft[i]==0){
			depth(v,ft,ct,i);
		}
		cout<<u[i]<<" "<<ft[i]<<" "<<ct[i]<<endl;
	}
  return 0;
}
