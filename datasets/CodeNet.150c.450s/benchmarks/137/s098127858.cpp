
#include <set>
#include <iostream>
#include <string>
using namespace std;
string cmd , word;
set<string> S;
int n;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>cmd;
        if(cmd=="insert")
        {
            cin>>word;
            S.insert(word);
        }
        if(cmd=="find")
        {
            cin>>word;
            if(S.count(word)>0)cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }
    return 0;
}
