#include <iostream>
#include <fstream>

#include <cassert>
#include <climits>

#include <string.h>

#include <vector>
#include <map>
#include <stack>
#include <deque>

enum Color
{
    kWhite,
    kGray,
    kBlack,
};

int n;
int start_vertex = 0;
std::vector< std::vector<int> > matrix;
std::vector<Color> c;
std::vector<int> d;

void breadthFirstSearch()
{
    for (int i = 0; i < n;++i)
    {
        c.push_back(kWhite);
        d.push_back(-1);
    }

    std::deque<int> tmp_queue;
    tmp_queue.push_back(start_vertex);
    c[start_vertex] = kGray;
    d[start_vertex] = 0;

    while (! tmp_queue.empty())
    {
        int current = tmp_queue.front();
        tmp_queue.pop_front();
        c[start_vertex] = kBlack;

        std::vector<int> line = matrix[current];
        for (int i = 0; i < line.size(); ++i)
        {
            if (line[i] > 0 && c[i] == kWhite)
            {
                tmp_queue.push_back(i);
                c[i] = kGray;
                d[i] = d[current] + 1;
            }
        }
    }
}

int main()
{
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::vector<int> line;
        for (int j = 0; j < n; ++j)
        {
            line.push_back(0);
        }
        matrix.push_back(line);
    }

    for (int i = 0; i < n; ++i)
    {
        int u;
        int k;

        std::cin >> u;
        std::cin >> k;

        for (int j = 0; j < k; ++j)
        {
            int tmp;
            std::cin >> tmp;
            matrix[u - 1][tmp - 1] = 1;
        }
    }

    breadthFirstSearch();

    for (int i = 0; i < n; ++i)
    {
        std::cout << (i + 1) << " " << d[i] << std::endl;
    }

    return 0;
}




