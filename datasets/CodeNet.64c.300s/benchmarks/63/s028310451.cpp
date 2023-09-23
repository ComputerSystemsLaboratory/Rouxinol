#include <stdio.h>

using namespace std;

int calcMax(int a,int b){
	int tmp;
	if(a > b){
		while(b != 0){
			tmp = b;
			b = a%b;
			a = tmp;
		}
		return a;
	}else{
		while(a != 0){
			tmp = a;
			a = b%a;
			b = tmp;
		}
		return b;
	}
}



int calcMin(int a,int b){
	int max_common = calcMax(a,b);
	return (a/max_common)*b;
}

int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d %d\n",calcMax(a,b),calcMin(a,b));
	}

    return 0;
}