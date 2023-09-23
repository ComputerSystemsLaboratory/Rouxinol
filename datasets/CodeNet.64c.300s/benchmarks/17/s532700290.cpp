#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int x,y,s,origin,i,ans=0,j;
	while(1){
		ans = 0;
		cin>>x>>y>>s;
		if(x==y && x == s && x == 0)
			break;
		for(i=1; ;i++){
			if((i*(100+x))/100 + (100+x)/100 >s)
				break;
			for(j=((s-(i*(100+x))/100)*100)/(100+x);;j++){
				if((i*(100+x))/100+(j*(100+x))/100 == s){
					if((i*(100+y))/100 + (j*(100+y))/100 >ans)
						ans = (i*(100+y))/100 + (j*(100+y))/100;
				}
				else if((i*(100+x))/100+(j*(100+x))/100 > s)
					break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}