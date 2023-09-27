#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

long a[1200000], b[1200000];

int main(){
	while(1){
		int n, m;
		long h[1501], w[1501];
		
		scanf(" %d %d", &n, &m);
		if(n==0) break;
		
		h[0]=0;
		for(int i=0; i<n; ++i){
			int t;
			scanf(" %d", &t);	
			h[i+1]=h[i]+t;
		}
	
		w[0]=0;
		for(int i=0; i<m; ++i){
			int t;
			scanf(" %d", &t);	
			w[i+1]=w[i]+t;
		}
		
		
		long aa=0, bb=0;
		for(int i=0; i<n; ++i){
			for(int j=i+1; j<=n; ++j){
				a[aa++]=h[j]-h[i];		
			}
		}
		sort(a, a+aa);
		
		for(int i=0; i<m; ++i){
			for(int j=i+1; j<=m; ++j){
				b[bb++]=w[j]-w[i];		
			}
		}
		sort(b, b+bb);
		
		long ans=0;
		for(long i=0; i<aa; ++i){
			//2?????¢?´¢	
			long left=0, right=bb-1;
			long center;
			bool found=false;
			while(left<=right){
				center=(left+right)/2;
				
				if(b[center]==a[i]){
					found=true;
					break;
				}
				else if(b[center]<a[i]) left=center+1;
				else if(b[center]>a[i]) right=center-1;		
			}
			
			if(found){
				long p, q;
				p=q=center;
				
				while(b[p]==a[i]) p--;
				while(b[q]==a[i]) q++;
				ans+=q-p-1;
			}
			
		}
		printf("%ld\n", ans);
	}	
}