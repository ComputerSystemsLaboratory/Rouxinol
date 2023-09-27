#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
#define NUMMAX 1500
#define CMAX (NUMMAX * (NUMMAX + 1) / 2)

void makecvec(vector<int>& in, vector<int>& out) 
{
    for (int ni = 0; ni < (int)in.size(); ni++) {
        for (int pi = 0; pi < (int)in.size() - ni; pi++) {
            int sum = 0;
            for (int si = 0; si < ni + 1; si++)
                sum += in[pi + si];
            out.push_back(sum);
        }
    }
}

int main(void)
{
    int n, m;
    while (cin >> n >> m) {
        if (!n && !m) break;
        vector<int> h(n), w(m);
        for (int i = 0; i < n; i++) cin >> h[i];
        for (int i = 0; i < m; i++) cin >> w[i];

        vector<int> hs, ws;
        hs.reserve(CMAX), ws.reserve(CMAX);
        makecvec(h, hs), makecvec(w, ws);
        sort(hs.begin(), hs.end()), sort(ws.begin(), ws.end());

        int result = 0;
        int hi = 0, wi = 0;
        while (hi != (int)hs.size() && wi != (int)ws.size()) {
            if (hs[hi] == ws[wi]) {
                int hn = 0, wn = 0;
                while (hi != (int)hs.size() && hs[hi] == hs[hi-hn]) 
                    hi++, hn++;
                while (wi != (int)ws.size() && ws[wi] == ws[wi-wn]) 
                    wi++, wn++;
                result += wn * hn;
            } else if (hs[hi] < ws[wi]) 
                hi++;
            else 
                wi++;
        }
        cout << result << endl;
    }

    return 0;
}