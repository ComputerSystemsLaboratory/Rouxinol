#include <iostream>
#include <utility>
#include <cstdio>
#include <cmath>
#include <climits>
using namespace std;


//---- Reversing Numbers
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(n-i-1==0){
            printf("%d", a[n-i-1]);
        }
        else{
            printf("%d ", a[n-i-1]);
        }
    }
    printf("\n");
}