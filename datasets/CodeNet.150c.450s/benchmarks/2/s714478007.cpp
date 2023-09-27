#include <iostream>
#include <fstream>
#include <cassert>
#include <string.h>
#include <vector>
#include <map>
#include <stack>

template <typename Container, typename Value>
int partition(Container& container, int p, int r)
{
    // 末尾の要素.
    Value x = container[r];

    // 末尾の要素x以下の値が何個あるか.
    int i = p - 1;

    // 先頭から末尾より1個前までの要素分進める.
    for (int j = p; j < r; ++j)
    {
        if (container[j] <= x) {
            //x以下の値が見つかった時点で､カウンタをインクリメントして交換.
            //xより小さい値を段々と確定させていくイメージ.
            i++;
            Value tmp = container[i];
            container[i] = container[j];
            container[j] = tmp;
        }
    }

    i++;
    Value tmp = container[i];
    container[i] = container[r];
    container[r] = tmp;
    return i;
}

template <typename Container>
Container createContainerFronCin(int cnt)
{
    Container ret;
    ret.reserve(cnt);

    int cur = 0;
    for (int i = 0; i < cnt; ++i) {
        std::cin >> cur;
        ret.push_back(cur);
    }

    return ret;
}

int main()
{
    int n = 0;
    std::cin >> n;
    std::vector<int> vec = createContainerFronCin< std::vector<int> >(n);

    int pos = partition<std::vector<int>, int>(vec, 0, n - 1);
    for (int i = 0; i < n; ++i)
    {
        std::string delim = (i + 1 < n) ? " " : "";
        if (i == pos) {
            std::cout << "[" << vec[i] << "]" << delim;
        } else {
            std::cout << vec[i] << delim;
        }
    }
    std::cout << std::endl;
}

