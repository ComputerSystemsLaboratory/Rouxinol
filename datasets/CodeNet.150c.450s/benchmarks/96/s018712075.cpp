#include<cstdio>
#include<cstring>

char map[10][10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int main(void) {
    char in[2000];
    int n;
    scanf("%d",&n);
    while(~scanf("%s", in)) {
        char c;
        int pos=0;
        while(c=in[pos]) {
            int i=0;
            while(c==in[pos+(++i)]);
            if(c-'0') printf("%c", map[c-'0'][(i-1)%strlen(map[c-'0'])]);
            pos += i;
        }
        printf("\n");
    }
    return 0;
}