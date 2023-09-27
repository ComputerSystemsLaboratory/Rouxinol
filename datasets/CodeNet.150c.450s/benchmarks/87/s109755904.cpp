#include <iostream>
#include <map>
#include <vector>
#include <array>

using namespace std;


int clear(vector<array<int, 5>>& m)
{
    int sum = 0;
    auto e = m.end();
    for(auto& arr: m){
        int cnt = 1, v = arr[0], ip = 0;
        int maxcnt = 0, maxv = 0, maxi = 0;
        for(int i = 1; i < 5; ++i){
            // cout << cnt << "," << v << endl;
            if(arr[i] == v)
                ++cnt;
            else{
                if(maxcnt < cnt){
                    maxcnt = cnt;
                    maxv = v;
                    maxi = ip;
                }
                v = arr[i];
                cnt = 1;
                ip = i;
            }
        }

        if(maxcnt < cnt){
            maxcnt = cnt;
            maxv = v;
            maxi = ip;
        }

        // cout << "max: " << maxcnt << "," << maxv << "," << maxi << endl;

        if(maxcnt >= 3){
            for(int i = 0; i < maxcnt; ++i)
                arr[maxi + i] = 0;
            sum += maxv * maxcnt;
        }
    }
    // cout << "sum: " << sum << endl;
    return sum;
}

void drop(vector<array<int, 5>>& m)
{
    if(m.size() < 2)
            return;
    for(int i = 0; i < 5; ++i){
        int idx = m.size() - 2;
        auto e = m.rend();
        int idx2 = m.size() - 1;
        for(auto s = m.rbegin(); s != e; ++s){
            if(idx > idx2)
                idx = idx2;
            auto& arr = *s;
            if(arr[i] == 0){
                while(m[idx][i] == 0 && idx != 0) { --idx; }

                arr[i] = m[idx][i];
                m[idx][i] = 0;

                if(idx == 0)
                    break;
            }

            --idx2;
        }
    }
}


int iter(vector<array<int, 5>>& m)
{
    int s = clear(m);
    drop(m);

    // for(auto&e : m){
    //     for(auto& ee: e){
    //         cout << ee << ",";
    //     }
    //     cout << endl;
    // }

    return s;
}




int main(void)
{
    int n;
    while(cin >> n){
        if(n == 0)
            break;

        vector<array<int, 5>> vec;
        for(int i = 0; i < n; ++ i){
            array<int, 5> arr;
            cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
            vec.push_back(arr);
        }

        int l = 0;
        int s = 0;
        do{
            l = s;
            s += iter(vec);
        }while(l != s);

        cout << s << endl;
    }
}