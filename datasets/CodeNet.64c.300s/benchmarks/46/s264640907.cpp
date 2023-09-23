#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
bool prime[1000005]={};
int main(){
	int a,d,n;
	for(int i=2;i<=1000000;i++){
		bool p=false;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				p=true;
				break;
			}
		}
		if(!p) prime[i]=true;
	}
	while(1){
		scanf("%d %d %d",&a,&d,&n);
		if(a+d+n==0) break;
		int cou=0;
		for(int i=a;;i+=d){
			if(prime[i]){
				cou++;
				if(cou==n){
					printf("%d\n",i); break;
				}
			}
		}
	}
}