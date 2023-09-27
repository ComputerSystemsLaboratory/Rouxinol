#include <iostream>
#include <cstdlib>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    map<int, int> iData;
    int iBuff, maxCount = 0, maxElement[100];
    pair<map<int, int>::iterator, bool> flag;
    while(cin >> iBuff)
    {
        flag = iData.insert(map<int, int>::value_type(iBuff, 1));
        if(flag.second == false)
        {
            iData[iBuff]++;
            maxCount = max(maxCount, iData[iBuff]);
        }
    }
    for(map<int, int>::iterator it = iData.begin(); it != iData.end(); it++)
    {
        if(it->second == maxCount )
            cout << it->first << endl;
    }
    return EXIT_SUCCESS;
}