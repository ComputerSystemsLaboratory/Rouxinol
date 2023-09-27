#include <cstring>
#include <cstdio>

using namespace std;

typedef struct word_t {
        char str[33];
        int len;
        int count;
        word_t();
} word_t;

word_t::word_t()
        :count(0)
        {
        }

int main()
{
        word_t word[1000];
        char str[33];
        int top = 0, i;

        while (scanf("%s", str) != EOF) {
                for (i = 0; i < top; i++) {
                        if (!strcmp(str, word[i].str)) {
                                word[i].count++;
                                break;
                        }
                }
                if (i == top) {
                        strcpy(word[i].str, str);
                        word[i].len = strlen(word[i].str);
                        word[i].count++;
                        top++;
                }
        }

        int mostCnt = 0, mostLen = 0;
        for (i = 0; i < top; i++) {
                mostCnt = (word[i].count > word[mostCnt].count) ? i : mostCnt;
                mostLen = (word[i].len > word[mostLen].len) ? i : mostLen;
        }
        printf("%s %s\n", word[mostCnt].str, word[mostLen].str);

        return 0;
}