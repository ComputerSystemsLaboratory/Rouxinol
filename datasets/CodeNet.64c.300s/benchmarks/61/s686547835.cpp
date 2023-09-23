#include <stdio.h>
int main(){
int n,m,temp;
scanf("%d%d",&n,&m);
int a[n+1][m+1];
for(int i=0;i<n;i++){
temp=0;
for(int j=0;j<m;j++){
scanf("%d",&a[i][j]);
temp+=a[i][j];
}
a[i][m]=temp;
}
for(int j=0;j<=m;j++){
temp=0;
for(int i=0;i<n;i++){
temp+=a[i][j];
}
a[n][j]=temp;
}
for(int i=0;i<=n;i++){
printf("%d",a[i][0]);
for(int j=1;j<=m;j++){
printf(" %d",a[i][j]);
}
printf("\n");
}

}