#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main() {
    stack<int> S1;
    vector< pair<int, int> > S2;
    char ch;
    int sum = 0;
    for (int i = 0; cin >> ch; i++) {
        if (ch == '\\') {
            S1.push(i);
        }
        else if (ch == '/' && S1.size() > 0) {
            int j = S1.top();
            S1.pop();
            
            int area = i - j;
            sum += area;
            
            while (S2.size() > 0 && (*(S2.end()-1)).first > j) {
                area += (*(S2.end()-1)).second;
                S2.pop_back();
            }
            
            S2.push_back(make_pair(j, area));
        }
    }
    
    cout << sum << endl;
    cout << S2.size();
    
    for (vector<pair<int, int> >::iterator i = S2.begin(); i != S2.end(); i++) {
        cout << " ";
        cout << (*i).second;
    }
    
    cout << endl;
    return 0;
}