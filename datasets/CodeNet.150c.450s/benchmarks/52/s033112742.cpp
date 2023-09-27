#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> t;
    int a;
    while (cin >> a)
    {
        if (a != 0)
        {
            t.push_back(a);
        }
        else if (a == 0)
        {
            cout << t.back() << endl;
            t.pop_back();
        }
    }
}

