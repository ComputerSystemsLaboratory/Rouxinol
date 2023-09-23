#include <bits/stdc++.h>
using namespace std;

int a[15],lef[15],rig[15];
bool flag;

bool solve(){
	for(int i=0; i<1024; i++){
		memset(lef,0,sizeof(lef));
		memset(rig,0,sizeof(rig));
		int lc=0,rc=0,j;
		int cnt = 0;
		for(cnt=0,j=i; cnt<10; cnt++,j>>=1){
			if(j&1) lef[lc++] = a[cnt];
			else rig[rc++] = a[cnt];
		}
		flag = true;
		for(int j=1; j<lc; j++)
			if(lef[j]<lef[j-1]){
				flag = false;
				break;
			}

		for(int j=1; j<rc; j++)
			if(rig[j]<rig[j-1]){
				flag=false;
				break;
			}

		if(flag) return true;
	}
	return false;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		for(int i=0; i<10; i++)
			scanf("%d",&a[i]);
		if(solve()) printf("YES\n");
		else printf("NO\n");
	}

}