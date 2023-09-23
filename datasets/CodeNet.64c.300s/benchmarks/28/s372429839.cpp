#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int w,h,x,y,r;
	scanf("%d%d%d%d%d",&w,&h,&x,&y,&r);
	if((x<r)||(y<r)||(x+r>w)||(y+r>h)){
		printf("No\n");
	}else{
		printf("Yes\n");
	}
	return 0;
}
