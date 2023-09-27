#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n, q, time_sum = 0;
    cin >> n >> q;
    queue<string> name;
    queue<int> time;
    vector<string> answer_n;
    vector<int> answer_t;
    for (int i = 0; i < n; i++)
    {
        string name_tmp;
        int time_tmp;
        cin >> name_tmp >> time_tmp;
        name.push(name_tmp);
        time.push(time_tmp);
    }
    while (time.size() != 0)
    {
        if (time.front() > q)
        {
            time_sum += q;
            time.push(time.front() - q);
            time.pop();
            name.push(name.front());
            name.pop();
        }
        else
        {
            time_sum += time.front();
            time.pop();
            answer_n.push_back(name.front());
            name.pop();
            answer_t.push_back(time_sum);
        }
        //        cout << time.front() << " " << name.front() << " " << time_sum << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << answer_n.at(i) << " " << answer_t.at(i) << endl;
    }
    return 0;
}

