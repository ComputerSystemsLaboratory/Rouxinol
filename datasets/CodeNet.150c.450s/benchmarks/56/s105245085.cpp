#include<iostream>
#include <iomanip>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int v[N];
    for(int i=0;i<N;i++){
        cin >> v[i];
    }
    long long int sum=0;
    int min=v[0];
    int max=v[0];
    for(int i=0;i<N;i++){
        sum = sum + v[i];
        if(v[i]<min){
            min = v[i];
        }
        if(v[i]>max){
            max = v[i];
        }
    }
    printf("%d %d %lld\n",min,max,sum);
    
    return 0;
}
