#include<cstdio>

using namespace std;

int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a-(a/b)*b);
}

int main(){
	int a,b;
	int g,l;
	int tmp;
	while ( ! (scanf("%d %d",&a,&b) == EOF) ){
		g = gcd(a,b);
		l = a/g*b;
		printf("%d %d\n",g,l);
	}
}