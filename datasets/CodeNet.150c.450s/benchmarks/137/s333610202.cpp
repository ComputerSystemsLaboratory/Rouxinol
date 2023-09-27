#include <set>
#include <cstdio>
#include <string>
 
using namespace std;
 
int main()
{
    int N; char S1[7], S2[7];
 
    scanf("%d", &N);
 
    set<string> dictionary;
 
    for (int i = 0; i < N; i++)
    {
        scanf("%s %s", S1, S2);
 
        if (S1[0] == 'i')
        {
            dictionary.insert(S2);
        }
        else
        {
            if (dictionary.find(S2) != dictionary.end())
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
    }
 
    return 0;
}