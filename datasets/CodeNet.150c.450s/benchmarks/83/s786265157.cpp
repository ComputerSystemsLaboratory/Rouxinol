#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

typedef struct tagItemType {
    int weight;
    int value;
} ItemType;

/* item: value, wegiht */
int napsack(vector<ItemType> item, int capa)
{
    int i, j;
    int result[101][10001] = {0};

    for (i = 1; i < item.size(); i++) {
        for (j = 1; j <= capa; j++) {
            result[i][j] = result[i - 1][j];
            if (j < item[i].weight) {
                continue;
            }
            if ((result[i - 1][j - item[i].weight] + item[i].value) > result[i - 1][j]) {
                result[i][j] = (result[i - 1][j - item[i].weight] + item[i].value);
            }
        }
    }

    return result[item.size() - 1][capa];
}


int main(void)
{
    int i;
    int value, weight;
    int itemNum;
    int capa;
    int ret;
    vector<ItemType> item;
    ItemType tmp = {0, 0};

    scanf("%d %d", &itemNum, &capa);
    item.push_back(tmp);
    for (i = 0; i < itemNum; i++) {
        scanf("%d %d", &tmp.value, &tmp.weight);
        item.push_back(tmp);
    }

    ret = napsack(item, capa);
    printf("%d\n", ret);

    return 0;
}