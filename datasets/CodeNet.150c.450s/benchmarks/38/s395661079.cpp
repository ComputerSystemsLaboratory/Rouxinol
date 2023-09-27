#include <stdio.h>
int main()
{
  double a,b,c,sum,i,n;
  scanf("%lf",&n);
  for(i=0;i<n;i++){
    scanf("%lf %lf %lf",&a,&b,&c);
    a=a*a;
    b=b*b;
    c=c*c;
    sum=a+b+c;
    //printf("%d %d %d %d",a,b,c,sum);//
    if(a==1&&b==1&&c==1){
      printf("NO\n");
    }else if(sum/2==a||sum/2==b||sum/2==c){
      printf("YES\n");
    }else printf("NO\n");
  }
  return 0;
}