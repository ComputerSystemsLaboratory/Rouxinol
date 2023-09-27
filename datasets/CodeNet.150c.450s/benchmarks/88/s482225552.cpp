#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int h, w;
    vector<pair<int, int> > x;
    while (1)
    {
        cin >> h >> w;
        if (h == 0)
        {
            break;
        }
        int diagonal = h * h + w * w;
        int maximam = (w + 1) * (w + 1) * (w + 1) * (w + 1);
        int mi_h = h, mi_w = w;
        int w_i = w;

        for (int i = h; i >= 1; i--)
        { // hを縮めてwを伸ばす
            int bigger_dig = i * i + w_i * w_i;
            if (bigger_dig <= maximam && bigger_dig > diagonal)
            {
                maximam = bigger_dig;
                mi_h = i;
                mi_w = w_i;
                // cout << i << " " << w_i << " " << bigger_dig << endl;
            }
            if (bigger_dig <= diagonal)
            {
                w_i++;
                i++; // iをもう一回やる
            }
        }
        w_i = w;
        for (int i = h+1; i<w; i++){// hをw以下に伸ばしながらwも狭めていく
            int bigger_dig = i * i + w_i * w_i; // hをw以下に伸ばす
            // cout << i << " " << w_i << " " << bigger_dig << endl;
            if(i>=w_i) break;
            if (bigger_dig < maximam && bigger_dig >= diagonal)
            {
                maximam = bigger_dig;
                mi_h = i;
                mi_w = w_i;
                w_i--;
                i--; // iを元に戻す
            } else if (bigger_dig == maximam && i < mi_h){
                maximam = bigger_dig;
                mi_h = i;
                mi_w = w_i;
                w_i--;
                i--; // iを元に戻す
            }else if(bigger_dig>maximam){
                w_i--;
                i--; // iを元に戻してwを小さくする
            }
            if(bigger_dig<diagonal){
                w_i++;
            }
        }

        x.push_back(make_pair(mi_h, mi_w));
    }
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i].first << " " << x[i].second << endl;
    }
}

