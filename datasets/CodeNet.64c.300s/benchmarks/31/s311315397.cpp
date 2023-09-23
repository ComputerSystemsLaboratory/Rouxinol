#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;

int d[28],data[31];

int main(){
	for(int i=0;i<28;i++){ scanf("%d",&d[i]); data[d[i]]++; }
	for(int i=1;i<=30;i++) if(data[i]==0) printf("%d\n",i);
}