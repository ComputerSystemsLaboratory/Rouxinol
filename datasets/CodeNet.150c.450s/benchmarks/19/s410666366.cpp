#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
int x,y;
while(scanf("%d%d",&x,&y)&&x||y){
	if(x>y)swap(x,y);
	printf("%d %d\n",x,y);
}

return 0;
}