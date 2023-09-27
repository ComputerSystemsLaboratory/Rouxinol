#include<bits/stdc++.h>
using namespace std;

int main(){
int a=0,b=0;
for(int c=0;c<4;c++){
	int d;
	scanf("%d",&d);
	a+=d;
}
for(int c=0;c<4;c++){
	int d;
	scanf("%d",&d);
	b+=d;
}
printf("%d\n",max(a,b));
}