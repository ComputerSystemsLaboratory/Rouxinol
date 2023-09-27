#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;

int main(){
	int a=0,b=0,c;
	for(int i=0;i<8;i++){ scanf("%d",&c); if(i<4) a+=c; else b+=c;}
	printf("%d\n",max(a,b)); 
}