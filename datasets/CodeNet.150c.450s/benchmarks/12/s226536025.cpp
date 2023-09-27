#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;



int main(){
    int N;
    int *H;
    cin >> N ;
    H = (int *)malloc(sizeof(int)*(N + 1));
    for (int i = 1; i <= N; i++) {
        scanf("%d",&H[i]);
    }
    for (int i = 1; i <= N; i++) {
        printf("node %d: ",i);
        printf("key = %d, ",H[i]);
        int k = i/2;
        if (k > 0) printf("parent key = %d, ",H[k]);
        k = 2*i;
        if (k <= N) printf("left key = %d, ",H[k]);
        k++;
        if (k <= N) printf("right key = %d, ",H[k]);
        
        printf("\n");
    }
    
    return 0;
}