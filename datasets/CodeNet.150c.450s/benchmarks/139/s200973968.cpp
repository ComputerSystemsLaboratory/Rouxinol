#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
    int N, M;
    std::cin >> N;
    std::cin >> M;
    std::vector<int> mark(N + 1, -1), front(1, 1), nfront;
    std::vector<std::vector<int>> path(N + 1);
    std::vector<int>::iterator imin;
    int temp1, temp2;
    for (int c = 0; c < M; ++c)
    {
        std::cin >> temp1;
        std::cin >> temp2;
        path[temp1].push_back(temp2);
        path[temp2].push_back(temp1);
    }
    while (front.size() != 0)
    {
        for (int c : front)
        {
            for (int d = 0; d < path[c].size(); ++d)
            {
                if (mark[path[c][d]] == -1)
                {
                    mark[path[c][d]] = c;
                    nfront.push_back(path[c][d]);
                }
            }
        }
        front = nfront;
        nfront.clear();
    }
    imin = std::min_element(mark.begin() + 1, mark.end());
    if (*imin == -1)
    {
        std::cout << "No" << std::endl;
        return 0;
    }
    std::cout << "Yes" << std::endl;
    for (int c = 2; c <= N; ++c)
    {
        std::cout << mark[c] << std::endl;
    }
    return 0;
}