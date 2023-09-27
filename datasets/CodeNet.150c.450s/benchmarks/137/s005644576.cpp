#include <cstdio>
#include <cstring>
#include <set>

using namespace std;

char str[16];
char com[9];
set<long long> keys;

int getChar(char ch)
{
    if (ch == 'A') return 1;
    else if (ch == 'C') return 2;
    else if (ch == 'G') return 3;
    else if (ch == 'T') return 4;
    return 0;
}

long long getKey(char str[])
{
    long long sum = 0, p = 1;
    for (int i = 0; i < strlen(str); i++)
    {
        sum += p * (getChar(str[i]));
        p *= 5;
    }
    return sum;
}

bool find(char str[])
{
    return keys.find(getKey(str)) != keys.end();
}

void insert(char str[])
{
    keys.insert(getKey(str));
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", com, str);

        if (com[0] == 'i')
            insert(str);
        else if (find(str))
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}