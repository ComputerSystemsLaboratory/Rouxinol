#include <iostream>
#include<vector>
#define MAX 100000
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    int w[1500],h[1500];
    //int x[MAX]={0};
    while((cin>>N>>M)&&N)
    {
        int tt=0;
        //w.resize(M);
       // h.resize(N);
        for(int i=0;i<N;i++)
        {
            cin>>h[i];
        }

        for(int j=0;j<M;j++)
        {
            cin>>w[j];
        }
        map< int, int > x, y;
        for(int i=0;i<N;i++)
        {
            int p=0;
            for(int j=i;j<N;j++)
            {
                p+=h[j];
                x[p]++;
            }
        }
        for(int i=0;i<M;i++)
        {
            int p=0;
            for(int j=i;j<M;j++)
            {
                p+=w[j];
                y[p]++;
                //tt+=x[p];
            }
        }
        for(map< int , int >::iterator it = x.begin(); it != x.end(); it++){
            tt += it -> second * y[it -> first];
        }
        cout<<tt<<endl;
    }
    return 0;
}

