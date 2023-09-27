#include <algorithm>
#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <vector>

std::stack<int> merge(
    std::stack<int>& merged,
    const int left_end,
    std::stack<std::pair<int, int>>& ponds)
{
    if (ponds.empty()) {
        return merged;
    }

    const auto& pond = ponds.top();
    if (left_end >= pond.first) {
        merged.push(0);
    }
    merged.top() += pond.second;
    ponds.pop();

    return merge(
        merged,
        std::min(left_end, pond.first),
        ponds);
}

std::stack<int> merge(std::stack<std::pair<int, int>>& ponds)
{
    std::stack<int> merged;
    if (ponds.empty()) {
        return merged;
    }
    return merge(
        merged,
        ponds.top().first,
        ponds);
}

int aggregate(std::stringstream& stream, std::stack<int>& merged) {
    if (merged.empty()) {
        return 0;
    }

    if (merged.size() == 1) {
        stream << merged.top();
        return merged.top();
    }
    
    const int t = merged.top();
    merged.pop();
    stream << t << " ";
    return t + aggregate(stream, merged);
}

void solve(const std::string& input) {
    std::stack<int> slope;
    std::stack<std::pair<int, int>> ponds;
    for (std::size_t i = 0; i < input.size(); ++i) {
        if ('\\' == input[i]) {
            slope.emplace(i);
        }
        if ('/' == input[i] && !slope.empty()) {
            ponds.emplace(slope.top(), i - slope.top());
            slope.pop();
        }
    }

    std::stack<int> merged = merge(ponds);
    const std::size_t size = merged.size();
    std::stringstream stream;
    std::cout << aggregate(stream, merged) << std::endl;
    std::cout << size;
    if (size > 0) {
        std::cout << " " << stream.str();
    }
    std::cout << std::endl;

    return;
}
int main()
{
    std::string input;
    getline(std::cin, input);
    solve(input);

    return 0;
}