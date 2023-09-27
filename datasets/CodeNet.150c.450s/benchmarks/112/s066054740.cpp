#include <cstdio>
#include <map>

using namespace std;

int main()
{
    int n, m;
    char before, after;
    map<char, char> conversion;
    int i;
    
    while (scanf("%d", &n) * n != 0){
        conversion.clear();

        for (i = 0; i < n; i++){
            scanf(" %c %c", &before, &after);

            conversion[before] = after;
        }

        scanf("%d", &m);
        for (i = 0; i < m; i++){
            scanf(" %c", &before);

            if (conversion.count(before)){
                printf("%c", conversion[before]);
            }
            else {
                printf("%c", before);
            }
        }
        puts("");
    }

    return (0);
}