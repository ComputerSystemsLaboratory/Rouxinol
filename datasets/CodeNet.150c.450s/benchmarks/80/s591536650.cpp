#include<string>
#include<cstdio>
#include<cctype>
#include<iostream>
#include <algorithm>
#include<cmath>
#include<queue>
using namespace std;

int main(){
    int a[8]={0},b[8]={0};
    cin >>a[1]>>a[2]>>a[3]>>a[4];
    a[5]=a[1]+a[2]+a[3]+a[4];
    cin >>b[1]>>b[2]>>b[3]>>b[4];
    b[5]=b[1]+b[2]+b[3]+b[4];
    if(a[5]>b[5])cout <<a[5]<<endl;
    else cout <<b[5]<<endl;
    return 0;
}