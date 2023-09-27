//By Vlgd
#include<bits/stdc++.h>
using namespace std;
bool prime(int x){
	if(x==1||x==0) return false;
	if(x==2) return true;
	if(x%2==0) return false;
	for(int i=3;i*i<=x;i++) if(x%i==0) return false;
	return true;
}
void solve(int x){
	int i=2;
	if(prime(x)){printf(" %d\n",x);return;}
	while(i<=x){
		while(prime(i)&&x%i==0){
			printf(" %d",i);
			x/=i;
		}
		i++;
	}
	printf("\n");
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d:",n);
	solve(n);
}
