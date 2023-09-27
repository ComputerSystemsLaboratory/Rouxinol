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
#include <cstring>
#include <cstdio>
#include <cmath>

using namespace std;

void f(const int,const int,int*);

int main()
{
    int N;
    int data[500001];
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>data[i];
    }
    for(int i=N/2;i>0;i--){
        f(N,i,data);
    }
    for(int i=1;i<=N;i++){
        cout<<" "<<data[i];
    }
    cout<<endl;
}
void f(const int N,const int d,int* data)
{
    int l=d*2;
    int r=d*2+1;
    int largest=d;
    if(l<=N&&data[d]<data[l]){
        largest=l;
    }
    if(r<=N&&data[largest]<data[r]){
        largest=r;
    }
    if(largest!=d){
        swap(data[d],data[largest]);
        f(N,largest,data);
    }
}