#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

template <typename C>
void PrintAll(const C& c) {
    for(auto it = c.cbegin(); it != c.cend();) {
        cout << *it++;
        if(it != c.cend()) {
            cout << ' ';
        }
    }
}

int main() {
    string str;
    cin >> str;

    //?¨????????????°?????°??????

    stack<int> s1;
    stack<pair<int, int>> s2 {};
    int sum {};

    //for(int i = 0; i < str.size(); ++i) {
    //    if(str[i] == '\\') {
    //        s1.push(i);
    //    }
    //    else if(str[i] == '/' && s1.size() > 0) {
    //        int j = s1.top();
    //        s1.pop();
    //        sum += i - j;
    //        int current = i - j;
    //        while(s2.size() > 0 && s2.top().first > j) {
    //            current += s2.top().second;
    //            s2.pop();
    //        }
    //        s2.push(make_pair(j, current));
    //    }
    //}

    for(int i = str.size() - 1; i >= 0; --i) {
        if(str[i] == '/') {
            s1.push(i);
        }
        else if(str[i] == '\\' && s1.size() > 0){
            int j = s1.top();
            s1.pop();
            sum += j - i;
            int current = j - i;
            while(s2.size() > 0 && s2.top().first < j) {
                current += s2.top().second;
                s2.pop();
            }
            s2.push(make_pair(j, current));
        }
    }

    vector<int> v;
    int num {};

    while(s2.size() > 0) {
        v.emplace_back(s2.top().second);
        s2.pop();
        ++num;
    }

    cout << sum << '\n' << num << (v.size() != 0 ? " " : "");
    PrintAll(v);
    cout << endl;
    
    return 0;
} 