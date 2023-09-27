#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> list;

    for (int i = 0; i < 10; ++i) {
        int tmp;
        cin>>tmp;
        list.push_back(tmp);
    }
    sort(list.begin(),list.end(),greater<int>());
    for (int j = 0; j < 3; ++j) {
        cout<<list[j]<<endl;
    }
    return 0;
}