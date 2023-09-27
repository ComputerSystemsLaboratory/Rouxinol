#include <cstdio>
#include <algorithm>
#define LOOP(index,times) for(int index=0;index<times;index++)
using namespace std;

int main(){

int N;
scanf("%d",&N);

int l[3];

LOOP(i,N){

scanf("%d %d %d",&l[0],&l[1],&l[2]);
sort(l,l+3);

if(l[0]*l[0]+l[1]*l[1]==l[2]*l[2])
	printf("YES\n");
else
	printf("NO\n");		

}
return 0;		
}