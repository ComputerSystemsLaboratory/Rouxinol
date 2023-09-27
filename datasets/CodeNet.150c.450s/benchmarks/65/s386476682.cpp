#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<sstream>
#include<iomanip>
#include<assert.h>
#include<ctime>
#include<cstdlib>
#include<numeric>
#include <typeinfo>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
const int inf=1e8;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009

void bubble(char *m1,int *k1,int n);
void selection(char *m2,int *k2,int n);
void is_stable(char *m,int *k,char *m1,int *k1,int n);
int main(){
	int n,i;
	cin>>n;
	char m,m1[n],m2[n];
	int k,k1[n],k2[n];
	loop(i,0,n){
		cin>>m>>k;
		m1[i]=m;m2[i]=m;
		k1[i]=k;k2[i]=k;
	}
	bubble(m1,k1,n);
	selection(m2,k2,n);
	
}

void bubble(char *m1,int *k1,int n){
	int i,j;
	char m[n];
	int k[n];
	loop(i,0,n){
		m[i]=m1[i];
		k[i]=k1[i];
	}
	loop(i,0,n){
		rloop(j,n-1,i+1){
			if(k1[j]<k1[j-1]){
				int t=k1[j];
				k1[j]=k1[j-1];
				k1[j-1]=t;
				char a=m1[j];
				m1[j]=m1[j-1];
				m1[j-1]=a;
			}
		}
	}
	cout<<m1[0]<<k1[0];
	loop(i,1,n){
		cout<<" "<<m1[i]<<k1[i];
	}
	cout<<"\n";
	is_stable(m,k,m1,k1,n);
}

void selection(char *m2,int *k2,int n){
	int i,j;
	char m[n];
	int k[n];
	loop(i,0,n){
		m[i]=m2[i];
		k[i]=k2[i];
	}
	loop(i,0,n){
		int minj=i;
		loop(j,i,n){
			if(k2[j]<k2[minj]){
				minj=j;
			}
		}
		int t=k2[i];
		k2[i]=k2[minj];
		k2[minj]=t;
		char a=m2[i];
		m2[i]=m2[minj];
		m2[minj]=a;
	}
	cout<<m2[0]<<k2[0];
	loop(i,1,n){
		cout<<" "<<m2[i]<<k2[i];
	}
	cout<<"\n";
	is_stable(m,k,m2,k2,n);
}

void is_stable(char *m,int *k,char *m1,int *k1,int n){
	int i,j;
	int flag=0;
	loop(i,1,9){
		vector<char> a,b;
		loop(j,0,n){
			if(k1[j]==i){
				a.push_back(m1[j]);
			}
			if(k[j]==i){
				b.push_back(m[j]);
			}
		}
		if(a!=b){
			cout<<"Not stable"<<"\n";
			return;
		}
	}
	cout<<"Stable"<<"\n";
}