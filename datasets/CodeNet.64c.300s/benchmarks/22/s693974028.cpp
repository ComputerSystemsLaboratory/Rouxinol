#include<stdio.h>
int main(){
int n,a[1000],b[1000],c[1000],i;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d %d",&a[i],&b[i],&c[i]);
}
for(i=0;i<n;i++){
if(a[i]*a[i]+b[i]*b[i]==c[i]*c[i]||c[i]*c[i]+b[i]*b[i]==a[i]*a[i]||a[i]*a[i]+c[i]*c[i]==b[i]*b[i]){
printf("YES\n");
}
else{
printf("NO\n");
}
}
return 0;
}