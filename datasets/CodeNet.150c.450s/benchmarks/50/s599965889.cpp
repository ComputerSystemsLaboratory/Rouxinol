#include <cstdio>

using namespace std;

int main()
{
    int amount;
    int change[] = {500, 100, 50, 10, 5, 1};

    while (scanf("%d", &amount), amount){
        int money = 1000;
        money -= amount;
        int count = 0;
        int i = 0;

        while (i < 6){
            if (money - change[i] >= 0){
                money -= change[i];
                count++;
            }
            else {
                i++;
            }
        }

        printf("%d\n", count);
    }

    return (0);
}