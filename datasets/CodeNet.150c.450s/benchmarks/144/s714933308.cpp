#include<cstdio>

int main(){
    long long m,n,l,i,j,k,s;
    scanf("%lld%lld%lld",&n,&m,&l);
    long long a[n][m],b[m][l];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%lld",&a[i][j]);/*Aの入力*/
        }
            }
            for(i=0;i<m;i++){
                for(j=0;j<l;j++){
                    scanf("%lld",&b[i][j]);/*Bの入力*/
                }
                    }
                    for(i=0;i<n;i++){

                        for(j=0;j<l;j++){
                            s = 0;
                            for(k=0;k<m;k++){
                                s = s + a[i][k] * b[k][j];
                            }
                            if(j==l-1){
                                printf("%lld",s);
                            }
                            else{
                                printf("%lld ",s);
                            }
                        }
                        printf("\n");
                    }
               
return 0;    
}
