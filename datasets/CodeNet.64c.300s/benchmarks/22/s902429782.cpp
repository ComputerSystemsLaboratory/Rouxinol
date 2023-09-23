#include <stdio.h>
#include <stdbool.h>

bool flag_rightangle(int a, int b, int c)//三辺a,b,cを持つ三角形が直角三角形かどうか
{
    if ((a * a == b * b + c * c) || (b * b == c * c + a * a) || (c * c == a * a + b * b)){
        return true;
    } else {
        return false;
    }
}

int main(void){
    int line_number;
    scanf("%d", &line_number);
    for(int i = 0; i < line_number; i++){
        int first_number;
        int second_number;
        int third_number;
        scanf("%d %d %d", &first_number, &second_number, &third_number);
        if (flag_rightangle(first_number, second_number, third_number) == true){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}