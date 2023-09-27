#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>


using namespace std;

int rep[100100];
int findr(int );
int findr(int x)
{
    if(rep[x]==x)return x;
    return findr(rep[x]);
}


int main()
{
    int n, q, i, j, a, x, y, t;


    scanf("%d %d", &n, &q);
    for(i=0; i<n; i++) rep[i]=i;
    for(i=0; i<q; i++)
    {
        scanf("%d %d %d", &a, &x, &y);
        if(a==0)
        {
            int repu = findr(x);
            int repv = findr(y);
            rep[repu] = rep[repv];
            /*if(repu != repv)
            {
                rep[repu]=repv;
            }*/
        }
        else
        {
            if(findr(x)==findr(y))
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
    }

    return 0;
}