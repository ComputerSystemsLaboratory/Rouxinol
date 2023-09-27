#include<bits/stdc++.h>
using namespace std;
 
signed main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int s=0;
    for(;a<=b;a++){
	if(c%a==0)s++;
	}
	printf("%d\n",s);
}