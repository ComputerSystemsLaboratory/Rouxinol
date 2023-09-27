#include <cstdio>
#include <cstring>

int main()
{
    char ring[101], p[101], line[505];
    scanf("%s", ring);
    scanf("%s", p);

    int ring_length, p_length;
    ring_length = strlen(ring);
    p_length = strlen(p);

    for(int i = 0; i < 5; i++){
      strcpy((line+i*(ring_length)),ring);
    }

    char string[101];
    int line_length = strlen(line);
    int counter = 0, k = 0;

    while(1){
        int i;
        for(i = 0; i < p_length; i++){
            if(i + k < line_length){
              string[i] = line[i + k];}
            else{
              break;
            }
        }
        string[i] = '\0';
        if(strcmp(string, p) == 0){
            counter = 1;
            break;
        }
        k++;
        if(k == line_length - p_length + 1 + 1) break;
    }

    if(counter == 0) printf("No\n");
    else printf("Yes\n");

    return 0;
}