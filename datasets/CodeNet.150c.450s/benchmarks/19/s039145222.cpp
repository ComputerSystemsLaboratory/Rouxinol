#include <iostream>
#include <math.h>
#include <map>
using namespace std;
int n,m;
int main() {
  while(1){
    scanf("%d%d",&n,&m);
    if(n==0&&m==0){break;}
    if(n>m){swap(n,m);}
    printf("%d %d\n", n, m);
    }
}