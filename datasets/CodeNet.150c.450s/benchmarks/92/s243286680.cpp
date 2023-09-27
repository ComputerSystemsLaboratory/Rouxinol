#include <cstdio>
#include <cmath>
#define LOOP(index,times) for(int index=0;index<times;index++)
using namespace std;

int main(){

int a,b;

while(scanf("%d %d",&a,&b) != EOF){

printf("%d\n",int(log10(a+b))+1);

}
return 0;		
}