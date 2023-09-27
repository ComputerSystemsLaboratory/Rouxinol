#include <iostream>
#include <vector>
using namespace std;


vector<pair<long long,long long>> soin(long long N){
    vector<pair<long long, long long>> res;
    for (long long i = 2; i * i <= N; i++)
    {
        if(N % i != 0) continue;
        long long p = 0;
        
        while(N % i==0)
        {
            p++;
            N = N/i;
        }

        res.push_back({i,p});        
    }

    //2020=2^2*5*101,101はi*i<=N (sqrt n)に収まらない
    if(N!=1)
    {
        res.push_back({N, 1});
    }

    return res;
}

int main()
{
    long long N;
    cin >> N;
    const auto &res = soin(N);
    cout << N << ":";
    for(auto p : res)
    {
        for(int i = 1; i <= p.second;i++)
        {
            cout << " " << p.first;
        }
    }
    
    cout << endl;
}
