#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

int main()
{
    std::stack<int> S1;
    std::stack<std::pair<int, int> > S2;

    char ch;
    int sum = 0;
    int cur_sum = 0;

    for (int i = 0; std::cin >> ch; i++)
    {
        if(ch == '\\'){
            S1.push(i);
        }else if(ch == '/' && !S1.empty()){
            cur_sum = (i - S1.top());
            sum += cur_sum;
            while(!S2.empty() && S2.top().first > S1.top()){
                cur_sum += S2.top().second;
                S2.pop();
            }
            S2.push(std::make_pair(S1.top(), cur_sum));
            S1.pop();
        }
    }
    std::cout << sum << "\n";

    std::vector<int> ans;

    while(!S2.empty()){
        ans.push_back(S2.top().second);
        S2.pop();
    }

    std::reverse(ans.begin(), ans.end());

    std::cout << ans.size();

    for(int i = 0; i < ans.size(); i++){
        std::cout << " " << ans[i];
    }

    std::cout << "\n";
}
