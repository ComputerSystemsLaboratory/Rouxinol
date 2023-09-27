#include <bits/stdc++.h>
using namespace std;

const int maxn = 1000000 + 5;
int n;
int mem[1000+5];

void Print()
{
    cout << "show" << endl;
    for(int i = 0; i < n; i++)
    {
        printf("%d ", mem[i]);
    }
    printf("\n");
}
int main()
{
    while(1)
    {
        scanf("%d", &n);
        if(!n) break;
        memset(mem, 0, sizeof(mem));
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &mem[i]);
        }

        sort(mem, mem+n); //Print();
        int m = maxn;
        int d;
        for(int i = 0; i < n-1; i++)
        {
            d = mem[i+1]-mem[i];
            if(d < m) m = d;
        }

        cout << m << endl;
    }
}

