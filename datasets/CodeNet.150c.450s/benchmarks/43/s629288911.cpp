#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int a,b;
	int ta,tb;
	scanf("%d",&n);
	while(n){
		ta=tb=0;
		for(int i=0;i<n;i++){
			scanf("%d %d",&a,&b);
			if(a>b){
				ta+=a+b;	
			}else if(a<b){
				tb+=a+b;
			}else{
				ta+=a;
				tb+=b;
			}
		}
		printf("%d %d\n",ta,tb);
		scanf("%d",&n);
	}
	return 0;
}