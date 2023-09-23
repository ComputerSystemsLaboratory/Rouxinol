#include <cstdio>
using namespace std;

int Up(int a){
	return (a / 1000) * 1000 + 1000;
}

int main(){
	int n;
	int debt = 100000;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		debt += debt / 20;
		if(debt % 1000 > 0) debt = Up(debt);
	}
	
	printf("%d\n", debt);
	
	return 0;
}