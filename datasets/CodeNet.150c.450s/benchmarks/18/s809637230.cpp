#include <stdio.h>

using namespace std;


int main(){
	int debt = 100000,n;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		debt=(debt/100)*105;
		if((debt%1000)>0){
			debt+=(1000-(debt%1000));
		}
	}

	printf("%d\n",debt);

    return 0;
}