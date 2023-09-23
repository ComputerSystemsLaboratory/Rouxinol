#include <stdio.h>
#include <stdbool.h>

bool Pythagoras_checker(int side[3])
{
    int temp;
    
    for (int i = 0; i < 2; i++) {   //sort
        for (int j = 2; j > i; j--) {
            if (side[i] > side[j]) {
                temp = side[j];
                side[j] = side[i];
                side[i] = temp;
            }
        }
    }
    
    if (side[0] * side[0] + side[1] * side[1] == side[2] * side[2]) {
        return true;
    } else {
        return false;
    }
}

int main(void)
{
    int a;
    int side[3];

    scanf("%d", &a);
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &side[j]);
        }
        
        if (Pythagoras_checker(side) == true) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}