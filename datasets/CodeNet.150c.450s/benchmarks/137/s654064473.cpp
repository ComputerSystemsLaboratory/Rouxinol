#include <set>
#include <unordered_set>
#include <map>
#include <string>
#include <iostream>

using namespace std;

void insert(unordered_set<string> &s, string word)
{
    s.insert(word);
    return;
}

void find(unordered_set<string> &s, string word)
{
    s.count(word) ? printf("yes\n") : printf("no\n");
    return;
}

int main()
{
    int n;
    scanf("%d", &n);

    string query, word;
    unordered_set<string> S;
    map<string, int> cmd;
    cmd["insert"] = 0;
    cmd["find"] = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> query >> word;
        switch (cmd[query])
        {
        case 0:
            insert(S, word);
            break;
        case 1:
            find(S, word);
            break;
        default:
            break;
        }
    }
}
