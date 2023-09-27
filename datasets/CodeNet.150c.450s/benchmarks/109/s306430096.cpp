#include<stdio.h>
#include<algorithm>
using namespace std;
int dat[20000];
int main(){
	int a;
	while(scanf("%d",&a),a){
		for(int i=0;i<2*a;i++){
			int j,h,b;
			scanf("%d:%d:%d",&j,&h,&b);
			dat[i]=j*7200+h*120+b*2+(i+1)%2;
		}
		std::sort(dat,dat+2*a);
		int ret=0;
		int c=0;
		for(int i=0;i<2*a;i++){
			if(dat[i]&1)c++;
			else c--;
			ret=max(ret,c);
		}
		printf("%d\n",ret);
	}
}