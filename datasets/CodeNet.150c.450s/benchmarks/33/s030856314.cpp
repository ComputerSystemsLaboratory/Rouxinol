#include <iostream>
using namespace std;

int main()
{
    int x, y, s;
    int a, b; //税別価格(a <= b)
    int sumx, sumy; //税がx,yの時の合計金額
    //出力すべき最大の合計金額

    while(1)
    {
        cin >> x >> y >> s;
        if ((x == 0) && (y == 0) && (s == 0)) {
            break;
        }
        int max=0;

        for (a = 1; a < s; a++) {
            for (b = a; b < s; b++) {
                sumx = (a*(100+x)/100) + (b*(100+x)/100);
                if (s == sumx) {
                    sumy = (a*(100+y)/100) + (b*(100+y)/100);
                    if (sumy > max) {
                        max = sumy;
                    }
                }
            }
        }
         
        cout << max << endl;
        
    }
    return 0;
}
