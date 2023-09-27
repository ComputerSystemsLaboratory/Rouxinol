#include<iostream>
#include<cstdio>
using namespace std;
int N;
int D[10][10];
int a,b,c;
int M[10];
bool F[10];
int town;
int main()
{
	while(true){
		scanf("%d",&N);
		if(N==0)break;
		for(int i=0;i<10;i++)for(int j=0;j<10;j++)D[i][j]=10000001;
		
		town=0;
		for(int i=0;i<N;i++){
			scanf("%d%d%d",&a,&b,&c);
			D[a][b]=c;
			D[b][a]=c;
			town=max(town,max(a,b));
		}
		int ans=100000001;
		int ansm;
		town++;
		for(int s=0;s<town;s++){
			for(int i=0;i<town;i++)F[i]=false;
			for(int i=0;i<town;i++)M[i]=10000001;
			M[s]=0;
			while(true){
				for(int i=0;i<town;i++){
					if(!F[i])goto a;
				}
				break;
a:;
				int v=-1;
				int mi=10000001;
				for(int i=0;i<town;i++){
					if(!F[i]){
						if(mi>=M[i]){
							mi=M[i];
							v=i;
						}
					}
				}
				F[v]=true;
				
				for(int i=0;i<town;i++){
					M[i]=min(M[i],M[v]+D[v][i]);
				}
			}
			int sum=0;
			for(int i=0;i<town;i++){
				sum+=M[i];
			}
			if(ans>sum){
				ans=sum;
				ansm=s;
			}
		}
		printf("%d %d\n",ansm,ans);
	}
	return 0;
}