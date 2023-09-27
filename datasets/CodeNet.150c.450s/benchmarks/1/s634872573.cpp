#include<iostream>
#include<cstdio>
#include<set>

std::multiset<int> s;
int N, curr;

int main()
{
    std::cin>>N;
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &curr);
        s.insert(curr);
        auto it = s.lower_bound(curr);
        if (++it != s.end())
            s.erase(it);
    }
    std::cout<<s.size()<<"\n";
}