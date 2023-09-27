#include <cstdio>
#include <cstring>

int main()
{
    char ring[101], p[101], line[202];
    scanf("%s", ring);
    scanf("%s", p);
    int ring_len = strlen(ring);
    int p_len = strlen(p);

    for(int i = 0; i < 2; i++){
        strcpy(line + i*(ring_len), ring);
    }

    if(strstr(line, p) != NULL) printf("Yes\n");
    else printf("No\n");
    return 0;
}