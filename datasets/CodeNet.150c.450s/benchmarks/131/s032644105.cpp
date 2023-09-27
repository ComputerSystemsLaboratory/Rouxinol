#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

#define rep(a, b, c) for (long a = b; a < c; a++)
using namespace std;

int A, L;

int convert(vector<int> list) {
    int rtn = 0;
    rep(i, 0, list.size()) {
        rtn *= 10;
        rtn += list[list.size() - i - 1];
    }
    return rtn;
}

vector<int> convert(int num) {
    vector<int> rtn(L, 0);
    rep(i, 0, rtn.size()) {
        rtn[i] = num % 10;
        num /= 10;
    }
    return rtn;
}

int makeMax(vector<int> list) {
    sort(list.begin(), list.end());
    return convert(list);
}

int makeMin(vector<int> list) {
    sort(list.begin(), list.end(), greater<int>());
    return convert(list);
}

void saiki(map<int, int> rem, vector<int> list, int i) {
    int num = convert(list);
    if (rem.count(num) != 0) {
        cout << rem[num] << " " << num << " " << (i - rem[num]) << endl;
        return;
    }
    rem.insert(map<int, int>::value_type(num, i));
    saiki(
            rem,
            convert(makeMax(list) - makeMin(list)),
            i + 1
    );
}

int main() {
    while(true) {
        cin >> A >> L;
        if (A == 0 && L == 0) {
            break;
        }
        saiki(
                map<int, int>(),
                convert(A),
                0
        );
    }
    return 0;
}