#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<complex>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<sstream>
#include<iostream>
using namespace std;
int main(void){

    int n,p;
    while(cin>>n>>p,n|p){
        int a[100] = {};
        int q = p;
        int now = 0;
        while(true){
            if(q>0){
                a[now]++;
                q--;
                if(a[now] == p){
                    cout<<now<<endl;
                    goto next;
                }
            }
            else{
                q = a[now];
                a[now] = 0;
            }
            now++;
            if(now == n)now -= n;
        }
        next:;
    }

    return 0;
}