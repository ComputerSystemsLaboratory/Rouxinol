#include <stdio.h>
using namespace std;
int main(){
	int a[256] = {0};
	char ch;

	while((ch = getchar()) != EOF){
				a[ch]++;
	}
	for(int i = 97; i <=122;i++)printf("%c : %d\n",i,a[i]+a[i-32]);
}
