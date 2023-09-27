#include<stdio.h>
//#include<math.h>
//#include<string>

int mypow(int a,int b){
    int r=1;
    while(b>0){
        b--;
        r*=a;
    }
    return r;
}


int process(int n,int l){
    int hole[10];

    for(int i=0;i<10;i++)
        hole[i]=0;
    for(int i=1;i<l+1;i++){
        int t= (n%mypow(10,i))/mypow(10,i-1);
        hole[t]++;
    }

    int max=0,min=0,l2=l;
    while(l2>0){
        int m=0;
        for(int i=9;i>=0;i--){
            if(hole[i]>0){
                hole[i]--;
                m=i;
                break;
            }
        }
        max+=m*mypow(10,l2-1);
        min+=m*mypow(10,l-l2);
        l2--;
    }
    return max-min;
}

int main(){

    int n[20],l,m=0,ok=0;
    while((scanf("%d%d",n,&l)==2) & (l>0)){


        while(ok==0){
            n[m+1]=process(n[m],l);
            m++;
            //chcek
            for(int j=0;j<m;j++){
                if(n[j]==n[m]){
                    printf("%d %d %d\n",j,n[j],m-j);
                    ok=1;
                    break;
                }

            }
        }
        ok=0;
        m=0;

    }
}