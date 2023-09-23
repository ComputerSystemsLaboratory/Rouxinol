#include <algorithm>
#include <cstdio>

using namespace std;

int main(){
    int N[65535];
    int i = 0;
    while(true){
        scanf("%d", &N[i]);
        if(N[i] == 0) break;
        i++;
    }

    for (int j = 0; j < i; j++){
        printf("Case %d: %d\n", j + 1, N[j]);
    }
    return 0;
}