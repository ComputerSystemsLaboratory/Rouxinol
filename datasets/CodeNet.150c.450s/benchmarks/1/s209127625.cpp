#include <stdio.h>
#include <stack>
#include <math.h>

using namespace std;


int main(){

    int n,tmp;
    scanf("%d",&n);

    int L[n],length = 0,left,right,m;

    for(int i=0; i < n; i++){
        scanf("%d",&tmp);

        if(i == 0){
            L[0] = tmp;
        }else{
            if(L[length] < tmp){
                length++;
                L[length] = tmp;
            }else{
            	left = 0,right = length+1;
            	m = left;
            	while(true){
            		if(L[m] >= tmp){
            			for(;m >= 0 && L[m] >= tmp; m--);
            			L[m+1] = tmp;
            			break;
            		}else{
            			left = m;
            			m = (left+right)/2;
            		}
            	}
            }
        }
    }

    printf("%d\n",length+1);

    return 0;
}