#include <iostream>

using namespace std;

int main()
{
    int T[31];
    T[0] = 1;
    T[1] = 1;
    T[2] = T[1]+T[0];
    for (int i=3; i<=30; i++)
        T[i] = T[i-1]+T[i-2]+T[i-3];
    for (int i=0; i<=30; i++)
        T[i] = (T[i]+3650-1)/3650;

    while (true)
    {
        int n;
        cin>>n;
        if (n==0)
            break;
        cout<<T[n]<<endl;
    }
}