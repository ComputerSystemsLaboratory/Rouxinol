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
#define all(i) i.begin(),i.end()
#define INF 1000000000


using namespace std;
int n,p;

int check(int mem[100]){
	int count=0;
	int ret;
	rep(i,n){
		if(mem[i]!=0){
			count++;
			ret=i;
		}
	}
	if(count==1)return ret;
	return -1;
}

int main(){
	while(1){
		int mem[100]={};
		cin>>n>>p;
		if(n==0 && p==0)break;
		int box=p;
		int count=0;
		while(1){
			if(box==0){
//				cout<<"1"<<endl;
				box+=mem[count%(n)];
				mem[count%(n)]=0;
			}
			else{
//				cout<<"2"<<endl;
				mem[count%(n)]++;
				box--;
				int ret;
				if( (ret=check(mem))!=-1 && box==0){
					cout<<ret<<endl;
					break;
				}
			}
			count++;
		}
	}
	return 0;
}