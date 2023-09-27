
#include <stdio.h>
#include <iostream>
#include <stack>
#include <vector>
#include <utility>
using namespace std;
int main()
{
    stack<int> S;
    vector<pair<int, int> > L;
    char c;
    int x = 0;
    int A = 0;

    while (scanf("%c", &c) != EOF)
    {

        if (c == '\\')
        {
            S.push(x);
        }
        else if (c == '/')
        {
            if (!S.empty())
            {
                A = 0;
                for (int i = L.size() - 1; i >= 0; i--)
                {
                    if (L[i].first >= S.top())
                    {
                        A += L[i].second;
                        L.pop_back();
                    }
                    else
                        break;
                }
                A += x - S.top();
                L.push_back(make_pair(S.top(), A));
                S.pop();
            }
        }
        x++;
    }
    A = 0;
    for (int i = 0; i < L.size(); i++)
    {
        A += L[i].second;
    }

    printf("%d\n%d", A, L.size());

    for (int i = 0; i < L.size(); i++)
    {
        printf(" %d", L[i].second);
    }
    printf("\n");
    return 0;
}

