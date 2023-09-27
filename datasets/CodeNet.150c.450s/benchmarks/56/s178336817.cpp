#include <cstdio>
int main(){
 int n,buf,max,min;
 long sum;
 scanf("%d",&n);
  
 scanf("%d",&buf);
 max=min=sum=buf;
 
 for(int i=1;i<n;i++){
  scanf("%d",&buf);
  if(buf>max){max=buf;}
  if(buf<min){min=buf;}
  sum += buf;
 }
 
 printf("%d %d %ld\n",min,max,sum);
}