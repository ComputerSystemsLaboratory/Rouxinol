#include <stdio.h>
int main(){
      int a,b,c,i,te;
      a=b=c=-1;
      for(i=0;i<10;i++){
            scanf("%d",&te);
           if(te>=a){
                  c=b;
                  b=a;
                 a=te;
           }
          else if(te>=b){
                   c=b;
                   b=te;
           }
          else if(te>c) c=te;
      }
      printf("%d\n%d\n%d\n",a,b,c);
      return 0;
}