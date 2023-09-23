#include <stdio.h>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
	int a[100],b[100],buf,i;
	for(i = 0;i < 100;i++) a[i] = 0;
	while(scanf("%d",&buf) != EOF){
		a[buf - 1]++;
	}
	for(i = 0;i < 100;i++){
		b[i] = a[i];
	}
	sort(a,a + 100,greater<int>());
	for(i = 0;i < 100;i++){
		if(b[i] == a[0]) printf("%d\n",i + 1);
	}
	return 0;
}