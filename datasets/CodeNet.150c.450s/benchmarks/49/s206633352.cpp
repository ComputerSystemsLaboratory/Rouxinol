#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(void)
{
    while(1){
        int n;
        scanf(" %d", &n);
        if(n == 0)
            break;
        vector<int> s;

        for(int i = 0; i < n; i++){
            int tmp;
            scanf(" %d", &tmp);
            s.push_back(tmp);
        }
        sort(s.begin(), s.end());

        int sum = 0;
        for(int i = 1; i < n - 1; i++)
            sum += s[i];
        printf("%d\n", sum / (n-2));
    }
    return 0;
}