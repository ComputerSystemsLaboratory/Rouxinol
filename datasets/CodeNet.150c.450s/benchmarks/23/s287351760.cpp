#define PI 3.14159265359
#define INF 2000000000
#define MAX 500000
#include <map>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
typedef long long ll;

ll F[45]={0};

ll fibo(int n){
    if(F[n]) return F[n];
    if(n==0||n==1) return F[n]=1;
    return F[n]=fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
}