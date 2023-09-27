#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main(void){
int x,y,z;
for(;;){
scanf("%d %d %d",&x,&y,&z);
if(x+y+z==-3)break;
if(x==-1||y==-1)printf("F\n");
else if(x+y>=80)printf("A\n");
else if(x+y>=65)printf("B\n");
else if(x+y>=50)printf("C\n");
else if(x+y>=30){
if(z>=50)printf("C\n");
else printf("D\n");
}
else printf("F\n");
}
return 0;
}