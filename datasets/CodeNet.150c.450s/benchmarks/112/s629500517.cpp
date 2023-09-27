#include <iostream>
#include <map>
#include <cstdio>
using namespace std;
int main()
{
    int ConvTblNum;
    while(cin >> ConvTblNum && ConvTblNum){
    map<string,string> ConvTbl;
    while(ConvTblNum--)
    {
        string a,b;
        cin >> a >> b;
        ConvTbl.insert(map<string,string>::value_type(a,b));
    }
    int ConvdNum;
    cin >> ConvdNum;
    string result="";
    while(ConvdNum--)
    {
        string c;
        cin >> c;
        auto it = ConvTbl.find(c);
        if(it!=ConvTbl.end())
        {
            c = it->second;
        }
        result += c;    
    }
    cout << result << endl;
    }
    return 0;
}