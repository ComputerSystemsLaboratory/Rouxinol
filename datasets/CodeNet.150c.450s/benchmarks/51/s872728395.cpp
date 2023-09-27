#include <cstdio>
using namespace std;

int main(void)
{
    bool student[30] = { false };
    
    int tmp;
    for (int i = 0; i < 28; i++){
        scanf("%d", &tmp);
        student[tmp - 1] = true;
    }
    
    for (int i = 0; i < 30; i++){
        if (!student[i]){
            printf("%d\n", i + 1);
        }
    }
    return (0);
}