#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;
typedef pair<int,int> P;
int main(){
	while(true){
		int a,l;
		scanf("%d%d",&a,&l);
		if(l==0) break;
		int tmp[21]={};
		tmp[0]=a;
		for(int i=1;i<=20;i++){
			int dig[6],t=tmp[i-1];
			for(int j=0;j<l;j++){
				dig[j]=t%10;
				t/=10;
			}
			sort(dig,dig+l);
			int mx=0,mn=0;
			for(int j=0;j<l;j++){
				mn*=10;
				mn+=dig[j];
			}
			sort(dig,dig+l,greater<int>());
			for(int j=0;j<l;j++){
				mx*=10;
				mx+=dig[j];
			}
			tmp[i]=mx-mn;
			bool flag=false;
			for(int j=0;j<i;j++){
				if(tmp[j]==tmp[i]){
					printf("%d %d %d\n",j,tmp[j],i-j);
					flag=true;
					break;
				}
			}
			if(flag) break;
		}
	}
	return 0;
}