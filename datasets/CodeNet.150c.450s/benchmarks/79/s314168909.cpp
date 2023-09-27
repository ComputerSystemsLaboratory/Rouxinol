#include <bits/stdc++.h>
#define cinf(n,x) for(int i=0;i<(n);i++) cin >> x[i];
typedef long long int ll;
using namespace std;

int main(){
	int n,r,p,c,t[50],s[50];
	while(true){
		cin >> n >> r;
		if(n==0 && r==0) return 0;
		for(int i=0;i<n;i++)
			t[i]= n-i;
		for(int i=0;i<r;i++){
			cin >> p >> c;
			for(int j=0;j<c;j++)
				s[j]=t[p-1+j];
			for(int j=0;j<p-1;j++)
				s[j+c]=t[j];
			for(int j=p+c-1;j<n;j++)
				s[j]= t[j];
			for(int j=0;j<n;j++)
				t[j]=s[j];

		}
		cout << t[0]<< endl;
	}

}
