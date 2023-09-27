#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <list>
#include <functional>
#include <algorithm>

using namespace std;

int main(int, char**){
    int a,b,c,d,e;
    cin >> a>>b>>c>>d>>e;
    vector<int> v = {a,b,c,d,e};
    std::sort(v.begin(),v.end(),greater<int>());
    //for(auto e: v) cout << e << ' ';
    cout << v[0] << ' ' << v[1] << ' ' << v[2] << ' ' << v[3] << ' ' << v[4] << endl;
    return 0;
}