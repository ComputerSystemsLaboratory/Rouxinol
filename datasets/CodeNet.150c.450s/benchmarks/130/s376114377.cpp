#include<cstdio>

int main(){
    int m,n,i,j,k,s;
    scanf("%d%d",&n,&m);
    int a[n][m],b[m][1];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);/*Aの入力*/
        }}
            for(i=0;i<m;i++){
                for(j=0;j<1;j++){
                    scanf("%d",&b[i][j]);/*Bの入力*/
                }}
                    for(i=0;i<n;i++){

                        for(j=0;j<1;j++){
                            s = 0;
                            for(k=0;k<m;k++){
                                s = s + a[i][k] * b[k][j];
                        }
                        printf("%d",s);
                        }
                        printf("\n");
                        }
               
return 0;    
}
