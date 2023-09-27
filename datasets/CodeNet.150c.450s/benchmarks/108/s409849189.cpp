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
    int id,f;
    dd(){
        id=0;
        f=-1;
    }
    dd(int a,int b){
        id=a;
        f=b;
    }
};
bool data[101][101]={};

void f1(dd*,int,int&,int);

int main()
{
    int N,M,num1,num2;
    dd ddata[101]={};
    cin>>N;
    int val[101]={};
    for(int i=0;i<N;i++){
        cin>>num1;
        cin>>M;
        val[num1]=-1;
        for(int j=0;j<M;j++){
            cin>>num2;
            data[num1][num2]=true;
        }
    }
    int time=1;
    queue<dd> que;
    bool vd[101]={};
    que.push(dd(1,0));
    vd[1]=true;
    for(dd ddata=que.front();!que.empty();que.pop(),ddata=que.front()){
        val[ddata.id]=ddata.f;
        for(int i=1;i<=N;i++){
            if(data[ddata.id][i]&&!vd[i]){
                vd[i]=true;
                que.push(dd(i,ddata.f+1));
            }
        }
    }
    for(int i=1;i<=N;i++){
        cout<<i<<' '<<val[i];
        cout<<endl;
    }
}