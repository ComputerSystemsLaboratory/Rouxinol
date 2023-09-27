#include <iostream>
using namespace std;

int checking(int x)
{
    for(int i=2; i*i<=x; i++)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int tmp,N;

    cin >> N;
    cout << N << ":";

    if(checking(N))
    {
        cout <<' '<< N << endl;
        return 0;
    }
    tmp = N;
    int c = 2;
    while(1)
    {
        if(tmp <= 1)
            break;
        for(int i = c; i<=N; i++)
        {
            if(tmp%i == 0)
            {
                cout <<" "<< i;
                tmp=tmp/i;
                c = i;
                break;
            }
        }
    }
    cout << endl;

    return 0;
}

