#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    int N,pre,current,second_pre;
    bool NO_FLG;

    scanf("%d",&N);
    for(int i=0;i<N;i++){
        pre = -1;
        second_pre = -1;
        NO_FLG = false;
        for(int k = 0; k < 10; k++){
            scanf("%d",&current);
            if(pre > current){
				if(second_pre == -1){
					second_pre = current;
				}else{
					if(second_pre > current){
						NO_FLG = true;
						//break;
					}else{
						second_pre = current;
					}
				}
			}else{
				pre = current;
			}
        }
        if(NO_FLG==false){
        	printf("YES\n");
        }else{
        	printf("NO\n");
        }
    }
    return 0;
}