#include<bits/stdc++.h>
using namespace std;

int h[10];
int main(){
    for(int i=0;i<10;i++)scanf("%d",&h[i]);
    sort(h,h+10);reverse(h,h+10);
    for(int i=0;i<3;i++)printf("%d\n",h[i]);
    return 0;
}