#include <iostream>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
using namespace std;

int main()
{
    const int N = 999999;

    vector<int> num1(N+1, -1);
    vector<int> num2(N+1, -1);
    num1[0] = 0;
    num2[0] = 0;
    for(int i=1; ; ++i){
        int tmp = i*(i+1)*(i+2)/6;
        if(tmp > N)
            break;
        for(int j=0; j+tmp<=N; ++j){
            if(num1[j] >= 0 && (num1[j+tmp] == -1 || num1[j]+1 < num1[j+tmp])){
                num1[j+tmp] = num1[j]+1;
            }
        }
        if(tmp % 2 == 1){
            for(int j=0; j+tmp<=N; ++j){
                if(num2[j] >= 0 && (num2[j+tmp] == -1 || num2[j]+1 < num2[j+tmp])){
                    num2[j+tmp] = num2[j]+1;
                }
            }
        }
    }

    for(;;){
        int n;
        cin >> n;
        if(n == 0)
            break;
        cout << num1[n] << ' ' << num2[n] << endl;
    }

    return 0;
}