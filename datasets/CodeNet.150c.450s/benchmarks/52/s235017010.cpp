#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x[1000] ={0},y[1000] = {0};
    int n;
    int a = 0,b = 0;

    while(scanf("%d",&n)!=EOF){
        if(n == 0){
            x[a] = y[b-1];
            b--;
            ++a;
        }
        else {
            y[b] = n;
            b++;
        }
    }
    for(int i = 0;i < a; i++)printf("%d\n",x[i]);

    return 0;
}