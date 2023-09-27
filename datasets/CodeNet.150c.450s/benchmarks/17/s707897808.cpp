#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

//Nayeem Shahriar Joy,Applied Physics And Electronic Engineering,University of Rajshahi.

int main(void)

{
    vector<int>p;

    int a;

    int w=5;

    while(w--)

    {
        cin>>a;
        p.push_back(a);
    }

    sort(p.begin(),p.end());

    int count=0;

    for(int i=p.size()-1;i>=0;i--)
    {
        count++;
        if(count==p.size())
        {
            cout<<p[i]<<endl;
        }
        else{
        cout<<p[i]<<" ";
        }
    }
    return 0;
}