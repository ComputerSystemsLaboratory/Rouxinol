#include <cstdio>
#include <iostream>
#include <map>
using namespace std;


int main(void)
{
    int  i;
    int  num;
    char input, output;
    map<char, char> cmap;

    for (;;) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }

        for (i = 0; i < num; i++) {
            getchar();
            scanf("%c", &input);
            getchar();
            scanf("%c", &output);
            cmap.insert(make_pair(input, output));
        }
        scanf("%d", &num);
        for (i = 0; i < num; i++) {
            getchar();
            scanf("%c", &input);
            if (cmap.find(input) == cmap.end()) {
                printf("%c", input);
            }
            else {
                printf("%c", cmap.at(input));
            }
        }
        printf("\n");
        cmap.clear();
    }

    return 0;
}