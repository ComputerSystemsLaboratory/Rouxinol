#include <cstdio>

int student[30];

int main()
{
    for (int i = 0; i < 28; i++){
        int n;

        scanf("%d", &n);
        student[n - 1] = 1;
    }

    for (int i = 0; i < 30; i++){
        if (student[i] == 0){
            printf("%d\n", i + 1);
        }
    }

    return (0);
}