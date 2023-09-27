#include <cstdio>

int main() {
    int num;
    scanf("%d", &num);

    int* prices = new int[num];
    for (int i = 0; i < num; i++) {
        int input;
        scanf("%d", &input);
        prices[i] = input;
    }

    int maxProfit = prices[1] - prices[0];
    if (num == 2) {
        printf("%d\n", maxProfit);
        return 0;
    }

    int minPrice = (prices[1] > prices[0])? prices[0] : prices[1];
    for (int i = 2; i < num; i++) {
        int profit = prices[i] - minPrice;
        if (profit > maxProfit) {
            maxProfit = profit;
        }
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }
    printf("%d\n", maxProfit);

    delete[] prices;
    return 0;
}