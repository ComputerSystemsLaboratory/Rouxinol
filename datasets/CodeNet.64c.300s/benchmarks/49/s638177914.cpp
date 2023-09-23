#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int a,b,sum,cnt;
    while(scanf("%d%d",&a,&b)!=EOF){
        sum=a+b;
        cnt=0;
        while(sum>0){
            cnt++;
            sum/=10;
        }
        cout << cnt << endl;
    }
    return 0;
}
