#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>

#define rep(i,n) REP(i,0,n)
#define REP(i,x,n) for(int i=x;i<n;++i)

using namespace std;

template<class T> void output(std::vector<T> & A) {
    const int n = A.size();
    for (int i = 0; i < n - 1; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << A[n - 1] << std::endl;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    string S; cin >> S;
    stack<int> slopes;
    stack<pair<int, int> > locAreas; // (leftPosition, localArea)
    int area = 0;
    vector<int> areas;
    const int nStr = S.size();
    rep(i, nStr) {
        if (S[i] == '\\') {
            slopes.push(i);
        }
        else if (S[i] == '/') {
            if (slopes.size() == 0) continue;
            const int leftPos = slopes.top(); slopes.pop();
            const int dArea = i - leftPos;
            area += dArea;
            int locArea = dArea;
            while (locAreas.size() > 0 && locAreas.top().first > leftPos) {
                locArea += locAreas.top().second; locAreas.pop();
            }
            locAreas.push(make_pair(leftPos, locArea));
        }
    }

    // sort out the local areas; it's reverse order
    const int n = locAreas.size();
    vector<int> vecLocAreas(n + 1);
    for (int i = 0; i < n; ++i) {
        vecLocAreas[i] = locAreas.top().second; locAreas.pop();
    }
    vecLocAreas[n] = n; // nb of the local areas
    reverse(vecLocAreas.begin(), vecLocAreas.end());

    // input: \\///\_/\/\\\\/_/\\///__\\\_\\/_\/_/\
    // out:
    // 35
    // 5 4 2 1 19 9
    
    cout << area << endl;
    output(vecLocAreas);

    return 0;
}

