#include <cstdio>
#include <stack>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main() {
    char buf[1<<15];
    scanf("%s", buf);
    string s(buf);

    stack<size_t> q;
    vector<pair<size_t, int>> L;
    int A=0;
    for (size_t i=0; i<s.length(); ++i) {
        if (s[i] == '\\') {
            q.push(i);
        } else if (s[i] == '/') {
            if (q.empty()) continue;

            int l=i-q.top();
            A += l;
            while (!L.empty()) {
                if (L.back().first < q.top()) break;

                l += L.back().second;
                L.pop_back();
            }
            L.push_back(make_pair(q.top(), l));
            q.pop();
        }
    }

    printf("%d\n", A);

    size_t k=L.size();
    printf("%zu%c", k, k? ' ':'\n');
    for (size_t i=0; i<k; ++i)
        printf("%d%c", L[i].second, i<k-1? ' ':'\n');

    return 0;
}