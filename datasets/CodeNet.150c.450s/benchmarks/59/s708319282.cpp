#include <iostream>

using namespace std;

const int N = 102;
int a[N];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j+1] < a[j])
            {
                swap(a[j+1], a[j]);
            }
            else
            {
                break;
            }
        }
        for (int j = 0; j < n - 1; j++)
        {
            printf("%d ", a[j]);
        }
        printf("%d\n", a[n-1]);
    }
    return 0;
}

