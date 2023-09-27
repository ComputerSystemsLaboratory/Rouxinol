

#include <iostream>
using namespace std;
 
int main() {
    int n,y,m,d,res,j;
    cin >> n;
    for(int i = 0;i < n;i++){
        res = 0;
        cin >> y >> m >> d;
        for(j = 1;j < y;j++){
            if(j % 3 == 0)res += 200;
            else res +=195;
        }
        for(j = 1;j < m;j++){
            if(y % 3 == 0)res += 20;
            else if(j % 2 == 0)res += 19;
            else res += 20;
        }
        res += d;
        res = 196471 - res;
        cout << res <<endl;
    }
    return 0;
}