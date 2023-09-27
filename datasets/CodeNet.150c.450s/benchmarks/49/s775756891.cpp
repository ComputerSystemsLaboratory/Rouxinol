#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, arr[100];
    while(scanf("%d", &N) != EOF && N != 0){
        for(int i = 0; i < N; i++){
            scanf("%d", arr+i);
        }
        sort(arr, arr + N);
        int s = 0;
        for(int i = 1; i < N-1; i++){
            s += arr[i]; 
        }
        printf("%d\n", s / (N-2));
    }
    return 0; 
}