#include <iostream>
#include <map>
using namespace std;
#define MAX_N 999999
bool notPrime[MAX_N+2];
int main()
{
    map<int,int> count;
    for (int i = 2 ; i <= MAX_N ; i++)
    {
        if (!notPrime[i])
        {
            for (int g = i+i ; g <= MAX_N ; g += i)
            {
                notPrime[g] = true;
            }
        }
    }
    int cnt = 0;
    count[1] = 0;
    for (int g = 2 ; g <= MAX_N ; g++)
    {
        if (!notPrime[g])
            cnt ++;
        count[g] = cnt;
    }
    for(int n;cin>>n;n++){
        cout<<count[n]<<endl;
    }
    return 0;
}