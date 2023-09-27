#include <stdio.h>
#include <iostream>
#include <cstring>

#define REP(i,a,b)for(long long i=(long long)a;i<(long long)b;i++)
#define min(a,b)(a<b?a:b)

using namespace std;

int mem[200]={0};
int ary[1000010]={0};
int ary_kisu[1000010]={0};

int cul(int n){
	return 	((n*(n+1)*(n+2))/6);
}

int main(void){

	REP(i,0,200) mem[i]=cul(i);
	
	REP(i,1,1000010) ary[i]=999999;
	REP(i,1,1000010) ary_kisu[i]=999999;

	REP(j,1,200){
		REP(i,mem[j],1000001){
			if(i-mem[j]>=0)
				ary[i]=min(ary[i],ary[i-mem[j]]+1);
		}
	}

	REP(j,1,200){
		if(1&mem[j]){
			REP(i,mem[j],1000001){
				if(i-mem[j]>=0)
					ary_kisu[i]=min(ary_kisu[i],ary_kisu[i-mem[j]]+1);
			}
		}
	}

	while(1){

		int n;
		cin >> n;

		if(!n)break;

		cout << ary[n]<<" "<<ary_kisu[n]<<endl;

	}


	return 0;
}