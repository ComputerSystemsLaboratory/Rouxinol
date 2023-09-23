#include <stdio.h>
#include <iostream>
using namespace std;
 
int main(){
    int a, n;
    int MAX = -1000001, MIN = 1000000;
    long long int SUM =0; 
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a);
        SUM += a;
        MAX = max(MAX, a);
        MIN = min(MIN, a);
    }
    printf("%d %d %lld\n",MIN, MAX, SUM);
}
