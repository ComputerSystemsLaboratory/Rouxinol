#include <iostream>

using namespace std;

bool p[1000001];
int pn[1000001];

int main()
{
    for(int i = 0; i < 1000001; i++)
    {
        p[i] = true;
    }
    for(int i = 2; i <= 1000000;i++)
    {
        if(!p[i])
            continue;
        for(int j = 2; i*j <= 1000000; j++)
        {
            p[i*j] = false;

        }
    }
    int result = 0;
    for(int i = 2; i < 1000001; i++)
    {

        if(p[i])
        {
            result++;
        }
        pn[i] = result;
    }
    int n;
    while(cin >> n)
    {
        cout << pn[n]<< endl;
    }
}