#include <iostream>
#include<vector>
#define MAX 1000000
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    vector<int> w,h;
    int p=0;
    //int x[MAX]={0};
    while((cin>>N>>M)&&N)
    {
        int tt=0;
        w.resize(M);
        h.resize(N);
        for(int i=0;i<N;i++)
        {
            cin>>h[i];
        }

        for(int j=0;j<M;j++)
        {
            cin>>w[j];
        }
        map<int,int> x;
        for(int i=0;i<N;i++)
        {
            p=0;
            for(int j=i;j<N;j++)
            {
                p+=h[j];
                x[p]++;
            }
        }
        for(int i=0;i<M;i++)
        {
            p=0;
            for(int j=i;j<M;j++)
            {
                p+=w[j];
                tt+=x[p];
            }
        }
        cout<<tt<<endl;
    }
    return 0;
}

