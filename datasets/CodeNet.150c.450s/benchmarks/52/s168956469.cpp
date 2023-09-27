#include<iostream>
#include<iomanip>
#include<stack>
using namespace std;

int main()
{
    stack<int> entry,exits,out;
    int n;
    while(cin>>n)
    {
        if(n)
        {
            entry.push(n);
        }
        else
        {
            exits.push(entry.top());
            entry.pop();
        }
    }
    while(!exits.empty())
    {
        out.push(exits.top());
        exits.pop();
    }
    while(!out.empty())
    {
        cout<<out.top()<<endl;
        out.pop();
    }
    return 0;
}