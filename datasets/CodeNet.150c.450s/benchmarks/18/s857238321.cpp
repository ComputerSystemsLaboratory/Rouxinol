#include <cstdio>
 
int main()
{
    int money = 100000;
    int n;
    float a = 0.05;
     
    scanf("%d", &n);
    while (n != 0){
        money += money * a;
        if ((money % 1000) != 0){
            money -= money % 1000;
            money += 1000;
        }
        n--;
    } 
    printf("%d\n", money);
     
    return (0);
}