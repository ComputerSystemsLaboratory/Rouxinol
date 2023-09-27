#include <bits/stdc++.h>

using namespace std;

map<string, bool> record;

int main(int argc, char const *argv[])
{
    int n;
    string oper, s;
    while (~scanf("%d", &n))
    {
        record.clear();
        for (int i = 0; i < n; ++i)
        {
            cin >> oper >> s;
            if("insert" == oper) record[s] = true;
            else
            {
                if(record[s]) printf("yes\n");
                else printf("no\n");
            }
        }
    }
    return 0;
}