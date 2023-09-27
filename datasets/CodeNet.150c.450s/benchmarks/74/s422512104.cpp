#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int CoinChoice(vector<int> coin, int target)
{
    int i, j;
    int result[50001];

    for (i = 1; i < 50001; i++) {
        result[i] = 50001;
    }
    result[0] = 0;

    for (i = 0; i < coin.size(); i++) {
        for (j = 0; j + coin[i] <= target; j++) {
            result[j + coin[i]] = min(result[j + coin[i]], result[j] + 1);
        }
    }

    return result[target];
}

int main(void)
{
    int i, tmp;
    int target;
    int cnum;
    int ret;
    vector<int> cointype;

    scanf("%d %d", &target, &cnum);
    for (i = 0; i < cnum; i++) {
        scanf("%d", &tmp);
        cointype.push_back(tmp);
    }

    ret = CoinChoice(cointype, target);

    printf("%d\n", ret);

    return 0;
}