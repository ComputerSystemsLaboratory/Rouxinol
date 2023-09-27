#include<iostream>
#include<cstdio>

const int MAX_N = int(1e6);
int N, a[MAX_N+10];
int res, m[MAX_N+10];

int main()
{
    std::cin>>N;
    for (int i = 0; i < N; ++i)
        scanf("%d", a+i);

    res = 0;
    for (int i = 0; i < N; ++i)
    {
        int l = 0, r = res+1;
        while (r-l>1)
        {
            int mid = l+r>>1;
            if (a[m[mid]] < a[i])
                l = mid;
            else
                r = mid;
        }

        if (res < l+1)
        {
            res = l+1;
            m[l+1] = i;
        }

        if (a[m[l+1]] > a[i])
            m[l+1] = i;

        //std::cout<<i<<") ";
        //for (int j = 1; j <= res; ++j) std::cout<<m[j]<<" ";
        //std::cout<<"res = "<<res<<"\n";
    }

    std::cout<<res<<"\n";
}