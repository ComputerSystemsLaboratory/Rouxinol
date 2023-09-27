#include<stdio.h>
using namespace std;
 
int main(){
    float x;
    float y;
    float area;
    float per;
    
   scanf("%f %f",&x,&y);
   area = x * y;
   per = (x+y)*2;
   
   printf("%.0f %.0f\n",area ,per);

    
    return 0;
}
