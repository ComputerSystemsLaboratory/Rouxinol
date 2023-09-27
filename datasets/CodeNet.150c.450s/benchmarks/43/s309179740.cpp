#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,c;
while(scanf("%d",&c),c){
	a=b=0;
	for(int d=0;d<c;d++){
	int e,f;
	scanf("%d%d",&e,&f);
	if(e>f)a+=e+f;
	else if(e<f)b+=e+f;
	else {a+=e;b+=f;}
}
printf("%d %d\n",a,b);
}
}