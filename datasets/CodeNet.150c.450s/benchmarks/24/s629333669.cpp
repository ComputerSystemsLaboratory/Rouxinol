#include <iostream>
#include <utility>
#include <algorithm>
#include <cmath>
#include <vector>

const int NUM = 10000;

using namespace std;

int main()
{
    long long n, m;
    while(1){
        cin >> n;
        cin >> m;
        if(n == 0 && m ==0){
            break;
        }

        vector<pair <long long, long long>> data(NUM);
        long long total_encounter = 0;
        long long d, p;
        for(long long i = 0 ; i < n; i++){
            cin >> d;
            cin >> p;
            data[i] = make_pair(p, d);
            total_encounter += d * p;
        }
        
        sort(data.begin(), data.end());
        reverse(data.begin(), data.end());
        
        long long cost = 0;
        long long index = 0;
        long long guard;
        for(int i = 0; i < n; i++){
            if(m <= 0)break;
            int guard = min(m, data[i].second);
            m -= guard;
            total_encounter -= guard * data[i].first;
        }
        cout << total_encounter << endl;
    }
    return 0;
}