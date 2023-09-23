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

int main()
{
    int N,M,num1,num2;
    bool data[101][101]={};
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num1;
        cin>>M;
        for(int j=0;j<M;j++){
            cin>>num2;
            data[num1][num2]=true;
        }
    }
    for(int i=1;i<=N;i++){
        cout<<data[i][1];
        for(int j=2;j<=N;j++){
            cout<<' '<<data[i][j];
        }
        cout<<endl;
    }
}