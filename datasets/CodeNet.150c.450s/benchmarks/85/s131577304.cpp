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
#include <climits>
 
using namespace std;
 
int f(const int);
 
int main()
{
    int N;
    pair<int,int> data[100];
    vector<vector<int> > vdata(100,vector<int>(100,INT_MAX));
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>data[i].first>>data[i].second;
    }
    vdata[0][0]=0;
    for(int j=1;j<N;j++){
        vdata[j][j]=0;
        for(int i=j-1;i>=0;i--){
            for(int k=i+1;k<=j;k++){
                int c=vdata[i][k-1]+vdata[k][j]+data[i].first*data[k].first*data[j].second;
                if(c<vdata[i][j]){
                    vdata[i][j]=c;
                }
            }
        }
    }
    cout<<vdata[0][N-1]<<endl;
}