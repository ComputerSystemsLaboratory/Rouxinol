#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    int N;
    while(cin >> N && N) {
        int sum, res;
        res = 0;
        for(int i = 1; i <= N; i++) {
            sum = i;
            for(int j = i + 1; j <= N; j++) {
                sum += j;
                if(sum == N)
                    res++;
                if(sum > N)
                    break;
            }
        }
        cout << res << endl;
    }
}