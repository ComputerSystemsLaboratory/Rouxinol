#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	int h,m,s,s1,ti[100001];
	char a,b;
	
	while(1){
	
		cin>>n;
		if(n==0) break;
		
		for(i=0;i<86400;i++) ti[i]=0;
		
		for(i=0;i<n*2;i++){
			cin>>h>>a>>m>>b>>s;
			if(i%2==0) ti[h*3600+m*60+s]++;
			else ti[h*3600+m*60+s]--;
		}
		
		for (i=0;i<86400;i++) {
			if (0<i) ti[i]+=ti[i-1];
		}
		
		int M = -1;
		for (i=0;i<86400;i++) {
			M=max(ti[i],M);
		}
		
		cout<<M<<endl;
	}	
	return 0;
}	
	
	
