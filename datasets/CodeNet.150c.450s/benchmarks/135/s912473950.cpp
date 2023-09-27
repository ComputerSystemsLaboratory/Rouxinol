#include<bits/stdc++.h>
using namespace std;
int a[1500100],b[1500100],A[1500100],B[1500100],p[1500100],q[1500100];
int main(){
	int n,m;
	while(cin>>n>>m,n){
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
		memset(p,0,sizeof(p));
		memset(q,0,sizeof(q));
		for(int i = 0;i < n;i++)cin>>a[i];
		for(int i = 0;i < m;i++)cin>>b[i];

		for(int i = 0;i < n;i++){
			A[i+1] = A[i] + a[i];
		}
		for(int i = 0;i < m;i++){
			B[i+1] = B[i] + b[i];
		}
		n++,m++;
		for(int i = 0;i < n;i++){
			for(int j = i + 1;j < n;j++){
				p[A[j] - A[i]]++;
			}
		}
		for(int i = 0;i < m;i++){
			for(int j = i + 1;j < m;j++){
				q[B[j] - B[i]]++;
			}
		}
		int cnt = 0;
		for(int i = 0;i < 1500100;i++){
			cnt += p[i] * q[i];
		}
		cout<<cnt<<endl;
	}
}