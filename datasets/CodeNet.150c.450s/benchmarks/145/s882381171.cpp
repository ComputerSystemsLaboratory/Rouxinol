#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> str;
    map<string,int> :: iterator it;
    string s,t1,t2;
    int max1=0,max2=0;

    while(cin >> s)
    {
        str[s]++;
        if(s.size()>max1)
        {
            max1 = s.size();
            t1 = s;
        }
        if(str[s]>max2)
        {
            max2 = str[s];
            t2 = s;
        }
    }

    cout << t2 << " " << t1 << "\n";
    return 0;
}