#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, l;

    while (cin >> a >> l, l){
        vector<int> v;
        v.push_back(a);
        for (int i = 1; ; i++){
            char num[128];
            sprintf(num, "%0*d", l, a);
            sort(num, num + l);
            int mini = atoi(num);
            reverse(num, num + l);
            int maxi = atoi(num);
            a = maxi - mini;
            int j = find(v.begin(), v.end(), a) - v.begin();
            if (j == v.size()){
                v.push_back(a);
            }
            else {
                printf("%d %d %d\n", j, a, i - j);
                break;
            }
        }
    }

    return 0;
}