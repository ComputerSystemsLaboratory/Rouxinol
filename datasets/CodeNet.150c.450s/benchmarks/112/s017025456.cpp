#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	while(n){
		map<char,char> trans;
		char c1,c2;
		for(int i=0;i<n;i++){
			scanf(" %c %c",&c1,&c2);
			trans[c1]=c2;
		}
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf(" %c",&c1);
			if(trans.find(c1)!=trans.end()){
				printf("%c",trans[c1]);
			}else{
				printf("%c",c1);
			}
		}
		printf("\n");
		scanf("%d",&n);
	}
	return 0;
}