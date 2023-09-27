#include <cstdio>
#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
#include <list>
#include <cstring>
using namespace std;

int main()
{
    list <int> l;
    list <int> :: iterator it;
    char op[10];
    int v, q;
    scanf("%d", &q);

    while (q--)
    {
        scanf("%s", op);
        if (op[0] == 'i')
            {
                scanf("%d", &v);
                l.push_front(v);
            }
        else if (strlen(op) == 10)   //deleteLast
            l.pop_back();
        else if (strlen(op) == 11)   //deleteFirst
            l.pop_front();
        else
        {
            scanf("%d", &v);

            for (it = l.begin(); it != l.end(); it++)
            {
                if (*it == v)
                {
                    l.erase(it);
                    break;
                }
            }
        }
    }

    it = l.begin();
    printf("%d", *it);
    it++;
    for (; it != l.end(); it++)
        printf(" %d", *it);
    printf("\n");
    return 0;
}
