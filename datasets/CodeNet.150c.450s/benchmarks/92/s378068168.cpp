#include <cstdio>
#include <algorithm>
#define ele long
using namespace std;
ele a,b;
inline ele d(ele x){
	if (x==0) return 1;
	ele s=0;
	while (x>0){
		++s;
		x/=10;
	}
	return s; 
}
int main(){
	while (~scanf("%d%d",&a,&b)) printf("%d\n",d(a+b));
	return 0;
}