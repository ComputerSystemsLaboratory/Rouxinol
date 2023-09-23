#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main() {
    int n[101]={0};
    int max = 0;
    int x;
    while(scanf("%d",&x)!=EOF){
        n[x]++;
        if(max<n[x]){
            max=n[x];
        }
    }
    for(int i=0; i<101; i++){
        if(max==n[i]){
            cout<<i<<endl;
        }
    }
    return 0;
}