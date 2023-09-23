#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int M[10];
    for(int i=0;i<10;++i) {
        scanf("%d",&M[i]);
    }
    sort(M,M+10);
    printf("%d\n%d\n%d\n",M[9],M[8],M[7]);
}