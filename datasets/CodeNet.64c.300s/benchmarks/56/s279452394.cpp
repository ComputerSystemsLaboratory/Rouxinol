#include<cstdio>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

int main(){
	int n; scanf("%d",&n);
	rep(_,n){
		int y,m,d; scanf("%d%d%d",&y,&m,&d);
		int ans=0;
		for(;y<1000;ans++){
			if(d<(y%3==0||m%2==1?20:19)) d++;
			else if(m<10) d=1, m++;
			else d=1, m=1, y++;
		}
		printf("%d\n",ans);
	}

	return 0;
}