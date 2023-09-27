#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <memory>
#include <cstdlib>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

stack<int> idx;
stack<pair<int, int> > tmp_water;
vector<int> ans;

int main(){
    //freopen("/Users/mac/Desktop/C++?¨????/test/test.txt", "r", stdin);
    string a;
    cin>>a;
    int all_sum=0;
    for (int i=0; i<(int)a.length(); i++) {
        if (a[i]=='\\') {
            idx.push(i);
        }
        if (a[i]=='/') {
            if (!idx.empty()) {
                int last=idx.top();
                idx.pop();
                all_sum+=i-last;
                int tmp_sum=0;
                while (tmp_water.size()&&tmp_water.top().first>last) {
                    tmp_sum+=tmp_water.top().second;
                    tmp_water.pop();
                }
                tmp_sum+=i-last;
                tmp_water.push(make_pair(last, tmp_sum));
                
            }
        }
    }
    cout<<all_sum<<endl;
    cout<<tmp_water.size();
    for (; tmp_water.size(); ) {
        ans.push_back(tmp_water.top().second);
        tmp_water.pop();
    }
    reverse(ans.begin(), ans.end());
    for (int i=0; i<ans.size(); i++) {
        cout<<' '<<ans[i];
    }
    cout<<endl;
    return 0;
}