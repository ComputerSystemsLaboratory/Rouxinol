#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<utility>
#include<cmath>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pi acos(-1)
#define all(v) v.begin(),v.end()
using namespace std;

const double eps = 1e-8;
const double INF = 1e12;


int main(){
	int n,cnt=0;
	while(cin>>n,n){
		cnt=0;
		for(int i=2;i<=n;i++){
			for(int j=1;j+i-1<=n;j++){
				int sum=0;
				for(int k=0;k<i;k++){
					sum+=(j+k);
				}
				if(sum==n){
					cnt++;
					break;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}