#include<iostream>
#include<stack>
#include<vector>
#include<utility>
using namespace std;

int main(){
    char c;
    stack<int> bs_pos;
    vector<pair<int, int> > puddle; //???????????¢???
    int pos = 0;
    int total_area = 0;
    while (cin >> c) {
        pos++;
        if (c == '\\') {
            bs_pos.push(pos);
            continue;
        }
        if (c == '_' || bs_pos.empty()) continue;
        int left_pos = bs_pos.top();
        int area = pos - left_pos;
        total_area += area;
        bs_pos.pop();
        while (!puddle.empty() && left_pos < puddle.back().first) {
            area += puddle.back().second;
            puddle.pop_back();
        }
        puddle.push_back(make_pair(left_pos, area));
    }
    cout << total_area << endl;
    cout << puddle.size();
    for (int i = 0; i < puddle.size(); i++) {
        cout << " " << puddle[i].second;
    }
    cout << endl;
}