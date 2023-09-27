#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    string result;
    vector<int> a;
    vector<int>::reverse_iterator begin,end;
    cin >> n;
    for (int c = 0; c < n; c++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    begin = a.rbegin();
    end = a.rend();

    for (;begin != end; begin++) {
        result += to_string(*begin) + " ";
    }
    result.erase(result.size() - 1);
    cout << result << endl;
}