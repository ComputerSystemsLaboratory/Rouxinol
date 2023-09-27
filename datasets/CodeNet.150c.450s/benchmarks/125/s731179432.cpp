#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
#include <map>
#include <bitset>
#include <cstring>
#include <cstdio>
#include <cmath>

using namespace std;

struct dd{
    int d,f;
    dd(){
        d=0;
        f=0;
    }
};
bool data[101][101]={};
void f1(dd*,int,int&,int);

int main()
{
    int N,M,num1,num2;
    dd ddata[101]={};
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num1;
        cin>>M;
        for(int j=0;j<M;j++){
            cin>>num2;
            data[num1][num2]=true;
        }
    }
    int time=1;
    for(int i=1;i<=N;i++){
        if(!ddata[i].d)f1(ddata,i,time,N);
    }
    for(int i=1;i<=N;i++){
        cout<<i<<' '<<ddata[i].d;
        if(ddata[i].d){
            cout<<' '<<ddata[i].f;
        }
        cout<<endl;
    }
}
void f1(dd* ddata,int num,int& time,int N)
{
    if(!ddata[num].d)ddata[num].d=time++;
    else return;
    data[num][num]=false;
    for(int i=1;i<=N;i++){
        if(data[num][i]){
            data[num][i]=false;
            data[i][num]=false;
            f1(ddata,i,time,N);
        }
    }
    ddata[num].f=time++;
}