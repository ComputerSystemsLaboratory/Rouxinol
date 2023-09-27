#include <bits/stdc++.h>

int main()
{

    char c;
    std::stack<int> st;
    std::stack <std::pair<int, int> > st2;

    int m, l, sum = 0;

    for (int i = 0; std::cin >> c; i++) {
        if (c == '.') break;
        if (c == '\\') st.push(i);
        else if (c == '/' && st.size() > 0) {
            l = st.top(); st.pop();
            sum += i - l;
            m = i -l;
            while (st2.size() > 0 && st2.top().first > l) {
                m += st2.top().second; st2.pop();
            }
            st2.push({l, m});
        }
    }

    std::vector<int> ans;
    while ( !st2.empty() ) {
        ans.push_back(st2.top().second);
        st2.pop();
    }
    std::reverse(ans.begin(), ans.end());
    std::cout << sum << std::endl;
    std::cout << ans.size();
    for (unsigned long i = 0; i < ans.size(); i++) std::cout << " " << ans[i];
    std::cout << std::endl;
    return 0;
}

