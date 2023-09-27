#include <iostream>
#include <queue>

using namespace std;

int main ()
{
    priority_queue <int> gquiz;
    string s;
    int x;
    while (cin>>s,s!="end"){
        if (s=="insert"){
            cin>>x;
            gquiz.push(x);
        }
        if (s=="extract"){
            cout<<gquiz.top()<<'\n';
            gquiz.pop();
        }
    }

    return 0;
}

