#include <algorithm>
#include <cstdio>

using namespace std;

int main(){
    int N[10];
    N[0] = 0;
    N[1] = 1;
    N[2] = 2;
    
    scanf("%d %d %d",&N[0],&N[1],&N[2]);
    sort(N, N+3);
    printf("%d %d %d\n",N[0], N[1], N[2]);
   // printf("\n");


    return 0;
}