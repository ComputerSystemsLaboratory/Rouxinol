
#include<iostream>
#include<queue>
using namespace std;

int n, q, t = 0;
struct Id {
    int load;
    char name[20];
};
queue<Id> Q;

int main()
{
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        Id I;
        cin >> I.name >> I.load;
        Q.push(I);
    }
    while (!Q.empty())
    {
        Id &I = Q.front();
        if (I.load <= q)
        {
            t += I.load;
            cout << I.name << " " << t << endl;
        }
        else {
            t += q;
            I.load -= q;
            Q.push(I);
        }
        Q.pop();
    }
    return 0;
}