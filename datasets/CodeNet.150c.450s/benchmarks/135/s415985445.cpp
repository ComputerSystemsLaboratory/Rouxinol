#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int N, M;
    vector<int> answer;
    while (cin >> N >> M && N != 0)
    {
        vector<int> h(N + 1, 0), w(M + 1, 0);
        int square = 0;
        map<int, int> length;
        for (int i = 0; i < N; i++)
        {
            cin >> h.at(i + 1);
            h.at(i + 1) += h.at(i);
        }
        for (int i = 0; i < M; i++)
        {
            cin >> w.at(i + 1);
            w.at(i + 1) += w.at(i);
        }
        for (int i = 0; i < N + 1; i++)
        {
            for (int j = 0; j < M + 1; j++)
            {
                length[h.at(i) - w.at(j)]++;
            }
        }
        for (auto x = length.begin(); x != length.end(); x++)
        {
            //cout << x->first << " " << x->second << endl;
            square += (x->second * (x->second - 1)) / 2;
        }
        answer.push_back(square);
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer.at(i) << endl;
    }
    return 0;
}

