#include <cstdio>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int LIS(vector<int> elem)
{
    int i;
    list<int> lis;

    lis.push_back(elem[0]);

    for (i = 1; i < elem.size(); i++) {
        if (lis.back() < elem[i]) {
            lis.push_back(elem[i]);
        }
        else {
            *(lower_bound(lis.begin(), lis.end(), elem[i])) = elem[i];
        }
    }

    return(lis.size());
}

int main(void)
{
    int i, tmp;
    int num;
    int ret;
    vector<int> elem;

    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d", &tmp);
        elem.push_back(tmp);
    }

    ret = LIS(elem);

    printf("%d\n", ret);

    return 0;
}