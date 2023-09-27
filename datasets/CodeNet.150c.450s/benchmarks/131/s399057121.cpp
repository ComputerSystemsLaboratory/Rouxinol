#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int a, l;
    vector<int> series;
    while (true) {
        series.clear();
        cin >> a >> l;
        if (a == 0 && l == 0) {
            break;
        }
        for (int n=0; true; n++) {
            bool is_found = false;
            for (vector<int>::iterator iter=series.begin(); iter!=series.end(); iter++) {
                if (*iter == a) {
                    cout << iter-series.begin() << ' ' << a << ' ' << n-(int)(iter-series.begin()) << endl;
                    is_found = true;
                    break;
                }
            }
            if (is_found) {
                break;
            }
            series.push_back(a);
            vector<char> digit;
            for (int d=0, i=1; d<l; d++, i*=10) {
                digit.push_back((a/i)%10);
            }
            sort(digit.begin(), digit.end());
            int min = 0;
            int max = 0;
            for (vector<char>::iterator iter=digit.begin(); iter!=digit.end(); iter++) {
                min = min*10+(*iter);
            }
            for (vector<char>::reverse_iterator iter=digit.rbegin(); iter!=digit.rend(); iter++) {
                max = max*10+(*iter);
            }
            a = max-min;
        }
    }
    return 0;
}