#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

int n;
string str;
int main(void){
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		bool left=false,right=false,lr=false;
		int cnt=0;
		for(int i=0;i<n;i++){
			cin >> str;
			if(str=="lu")left=true;
			if(str=="ru")right=true;
			if(str=="ld")left=false;
			if(str=="rd")right=false;
			if(!lr && left && right){
				cnt++;
				lr=true;
			}
			if(lr && !left && !right){
				cnt++;
				lr=false;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}