#include<stdio.h>
using namespace std;

int main(){
    int x,y;
    



    for(int i =0;i<3000;++i){
        scanf("%d %d",&x,&y);
        if((x == 0) && (y == 0) )break;
      
      if (x<y) {
          printf("%d %d\n",x,y);
      }
      else
      {
          printf("%d %d\n",y,x);
      }
      
      

        
    }
    
    return 0;
}
