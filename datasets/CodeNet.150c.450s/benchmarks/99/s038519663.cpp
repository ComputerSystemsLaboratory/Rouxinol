#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    int n;
    char mcxi[] = {'m', 'c' ,'x', 'i'};
    string num;
    cin >> n;
    while (n--) {
        vector<pair<char, int> > vp;
        for (int i = 0; i < 4; ++i)
            vp.push_back(make_pair(mcxi[i], 0));
        for (int i = 0; i < 2; ++i) {
            cin >> num;
            for (int j = 0; j < num.size(); ++j) {
                if (num[j] > 'a' && num[j] < 'z') {
                    for (int k = 0; k < 4; ++k) {
                        if (num[j] == vp[k].first) {
                            if (j-1 >= 0 && num[j-1] > '0' && num[j-1] <= '9')
                                vp[k].second += num[j-1] - '0';
                            else
                                vp[k].second++;
                        }
                    }
                }
            }
        }
        for (int i = 3; i >= 0; --i) {
            if (vp[i].second > 9) {
                vp[i-1].second++;
                vp[i].second %= 10;
            }
        }
        for (int i = 0; i < 4; ++i) {
            if (vp[i].second == 0)
                continue;
            else if (vp[i].second == 1)
                cout << vp[i].first;
            else
                cout << vp[i].second << vp[i].first;
        }
        cout << endl;
    }
    return 0;
}