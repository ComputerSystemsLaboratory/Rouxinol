#include <stdio.h>
#include<math.h>
using namespace std;

int main(){

	int count[101],tmp,max=-1;
	for(int i=0;i < 101;i++)count[i] = 0;

	while(scanf("%d",&tmp)!=EOF){
		count[tmp]++;
		max = (max >= count[tmp])?max:count[tmp];
	}

	for(int i=0;i<101;i++){
		if(count[i] == max)printf("%d\n",i);
	}
    return 0;
}