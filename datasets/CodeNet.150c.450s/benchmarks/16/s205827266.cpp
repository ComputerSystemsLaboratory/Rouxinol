#include <iostream>
#include <stack>
#include <string>
#include <list>
using namespace std;

struct Mizutamari
{
    int kudatta;
    int menseki;
};
int main()
{
    int total = 0;
    stack<int> kudari;
    stack<Mizutamari> mizutamari;

    string input;
    cin >> input;
    for (int i = 0; i < input.size(); i++)
    {
        char c = input[i];
        // 平地は特にすることが無い
        if (c == '_')
            continue;

        // 下りならその位置を記録する
        if (c == '\\')
        {
            kudari.push(i);
            continue;
        }

        // 平地でも下りでも無いので上り
        // 上りでも、対応するくだりがなければ何もしない
        if (kudari.empty())
            continue;

        // 下った位置と上った位置の差が面積
        int kudatta = kudari.top();
        kudari.pop();
        int menseki = i - kudatta;

        total += menseki;

        while (mizutamari.empty() == false && kudatta < mizutamari.top().kudatta)
        {
            // 水たまりが下にある、ので合成する
            Mizutamari m = mizutamari.top();
            mizutamari.pop();
            menseki += m.menseki;
        }
        mizutamari.push({kudatta, menseki});
    }
    list<int> reverse;
    while (mizutamari.empty() == false)
    {
        reverse.push_back(mizutamari.top().menseki);
        mizutamari.pop();
    }
    cout << total << endl;
    cout << reverse.size();
    for (auto it = reverse.rbegin(); it != reverse.rend(); it++)
    {
        cout << " " << *it;
    }
    cout << endl;
    return 0;
}
