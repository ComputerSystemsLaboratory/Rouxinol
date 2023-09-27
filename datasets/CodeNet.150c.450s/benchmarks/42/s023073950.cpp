#include <iostream>
#include <queue>
#include <string>
#include <cstdlib>
#include <utility>

using namespace std;

queue<string> qs;
queue<int> qi;

void push(string s, int i)
{
    qs.push(s);
    qi.push(i);
}

void pop()
{
    qs.pop();
    qi.pop();
}

int main() {
    int n,q;

    pair<string, int> pair;
    int time = 0;
    cin >> n >> q;
    while(cin >> pair.first >> pair.second)
    {
        push(pair.first,pair.second);
    }
    
    while(!qs.empty())
    {
        int rem = qi.front();
        if(rem <= q)
        {
            time += rem;
            cout << qs.front() << " " << time << endl;
        }
        else
        {
            time += q;
            push(qs.front(), rem - q);
        }
        pop();
    }
    
    return 0;
}