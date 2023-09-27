#include <stdio.h>

int n,a,sequence[100010],ind=1;

int main()
{
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&a);
        if(i==0){
            sequence[0]=a;
            continue;
        }
        if(a>sequence[ind-1]){
            sequence[ind++]=a;
            continue;
        }

        int ini=0,fin=ind-1;

        while(ini<fin){
            int md=(ini+fin)/2;

            if(sequence[md]>=a){
                fin = md;
            }else{
                ini = md+1;
            }
        }

        sequence[ini]=a;
    }

    printf("%d\n",ind);
    return 0;
}