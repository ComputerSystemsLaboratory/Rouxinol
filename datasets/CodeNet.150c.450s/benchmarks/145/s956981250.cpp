#include <iostream>
#include <string>
#include <map>
using namespace std;
map<string,int> table;
int main(){
    string str;
    string maxLen, maxT;
    while(cin >> str)
	{
        (table[str])++;
        if(table[maxT] < table[str])
		{
            maxT = str;
		}
        if(maxLen.size() < str.size())
		{
            maxLen = str;
		}
    }
    cout << maxT << ' ' << maxLen << endl;    
}