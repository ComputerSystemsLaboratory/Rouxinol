#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a, s[2]={0};
		
	for(int i=0; i<2; ++i){
		for(int j=0; j<4; ++j){
			scanf(" %d", &a);
			s[i]+=a;
		}
	}
	
	if(s[0]>=s[1]) printf("%d\n", s[0]);
	else printf("%d\n", s[1]);

	return 0;
}