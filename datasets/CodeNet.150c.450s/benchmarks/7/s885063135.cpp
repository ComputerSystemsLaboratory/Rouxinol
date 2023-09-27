#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define ll long long
#define EPS 1.0e-8
#define MAX_N 100

int num[10];

int main(){
	rep(i,10) cin >> num[i];
	sort(num,num+10,greater<int>());
	printf("%d\n%d\n%d\n",num[0], num[1], num[2]);
}