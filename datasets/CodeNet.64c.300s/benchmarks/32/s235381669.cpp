#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int c[10000];
    for(int i = 0; i < n; ++i){
        scanf("%d", &c[i]);
    }
    int min = c[0];
    int max = c[0];
    for(int i = 1; i < n; ++i){
        if(min > c[i]) min = c[i];
        if(max < c[i]) max = c[i];
    }
    long long int sum = 0;
    for(int i = 0; i < n; ++i){
        sum += c[i];
    }
    printf("%d %d %lld\n", min, max, sum);
    return 0;
}