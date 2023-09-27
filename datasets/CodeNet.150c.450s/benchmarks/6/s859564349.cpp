#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
	int a,b,c;
	bool ans=false;
	
	scanf("%d %d %d",&a,&b,&c);
	if(a<b){
		if(a<c){
			if(b<c){
				printf("Yes\n");
				ans=true;
			}
		}
	}
	if(ans==false)
	printf("No\n");
}
