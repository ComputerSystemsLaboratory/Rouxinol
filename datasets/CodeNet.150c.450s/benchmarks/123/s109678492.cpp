#include <stdio.h>
#include <cmath>
#include <algorithm>

int main(){
    int n,tmp,count = 0,limit;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&tmp);
        limit = sqrt(tmp);
        if(tmp > 3){
           	if(tmp%2 == 0)	count++;
        	else{
				for(int j = 3; j <= limit; j+=2){
					if(tmp%j==0){
						count++;
						break;
					}
				}
        	}
        }
    }
    printf("%d\n",n-count);
}