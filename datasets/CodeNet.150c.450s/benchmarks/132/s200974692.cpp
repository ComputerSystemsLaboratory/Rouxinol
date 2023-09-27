#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
using namespace std;

int main(){
	int N,P;
	while(cin>>N>>P,N||P){
		int wan,cnt[50]={};
		wan = P;
		for(int i=0;;i=(i+1)%N){
			if(wan==0){
				wan += cnt[i]; cnt[i] = 0;
			}
			else{
				cnt[i]++; wan--;
				if(cnt[i]==P){
					printf("%d\n",i); break;
				}
			}
		}
	}
	return 0;
}