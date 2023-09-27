#include <iostream>
#define MAX 10
using namespace std;

int n, res = 0;

void dfs(int sum, int count)
{
    if (sum == n) {
        res++;
      	return ;
    }
    if (count == 4) return;
    for (int i = 0; i <= 9; i++) {
        dfs(sum + i, count + 1);
    }
}

int main(void)
{
    while (cin >> n) {
        res = 0;
        dfs(0, 0);
        cout << res << endl;
    }

    return 0;
}