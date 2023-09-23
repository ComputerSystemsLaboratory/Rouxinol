#include <cstdio>
using namespace std;

int main(void)
{
    int score;
    int A_sum = 0, B_sum = 0;
    
    for (int i = 0; i < 8; i++){
        scanf(" %d", &score);
        if (i < 4){
            A_sum += score;
        }
        else {
            B_sum += score;
        }
    }
    
    printf("%d\n", (B_sum <= A_sum) ? A_sum : B_sum);
    
    return (0);
}