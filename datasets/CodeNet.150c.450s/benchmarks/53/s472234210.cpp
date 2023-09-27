#include<iostream>
#include <cstdio>
#include<cmath>
#include<vector>


using namespace std;

////Nayeem Shahriar Joy,Applied Physics &Electronic Engineering,University of Rajshahi.

void primefactor(int n)

{
    vector<int>p;
    cout<<n<<": ";
    while(n%2==0)
    {
        p.push_back(2);
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i=i+2)
    {
        while(n%i==0)
        {
            p.push_back(i);
            n=n/i;
        }
    }
    if(n>2)
    {
        p.push_back(n);
    }
    for(int j=0;j<p.size();j++)
    {
        if(j==p.size()-1)
        {
            cout<<p[j]<<endl;
        }
        else{
        cout<<p[j]<<" ";
        }
    }
}

int main() {

    int N;

    cin>>N;

    primefactor(N);

}