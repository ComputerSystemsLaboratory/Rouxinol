#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int n;

    int a;
    int b;
    int c;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (    (a*a+b*b == c*c) || (b*b+c*c == a*a) || (c*c+a*a == b*b)    )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}