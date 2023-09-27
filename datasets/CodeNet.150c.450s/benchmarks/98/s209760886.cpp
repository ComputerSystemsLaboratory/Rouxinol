#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
#include<cmath>
typedef long long int ll;
#define VI vector<int>

#define rep(i,a) for(int i=0;i<(a);i++)

int n,m;

using namespace std;

bool calc(int N[101],int M[101],int a,int b){
	int nc[101],mc[101];
	rep(i,101)nc[i]=N[i];
	rep(i,101)mc[i]=M[i];
	swap(nc[a],mc[b]);
	int sumN=0,sumM=0;
	rep(i,n)
		sumN+=nc[i];
	rep(i,m)
		sumM+=mc[i];
	if(sumN==sumM){
		return true;
	}
	return false;
}

int main(){
	while(1){
		int nc[101],mc[101];
		cin>>n>>m;
		if(n==0 && m==0)break;
		rep(i,n){
			int tmp;
			cin>>tmp;
			nc[i]=tmp;
		}
		rep(i,m){
			int tmp;
			cin>>tmp;
			mc[i]=tmp;
		}
		int ansN=1000,ansM=1000;
		rep(i,n){
			rep(j,m){
				if(calc(nc,mc,i,j) && ansN+ansM>nc[i]+mc[j]){
					ansN=nc[i],ansM=mc[j];
				}
			}
		}
		if(ansN!=1000 && ansM!=1000)cout<<ansN<<" "<<ansM<<endl;
		else cout<<"-1"<<endl;
	}

	return 0;
}