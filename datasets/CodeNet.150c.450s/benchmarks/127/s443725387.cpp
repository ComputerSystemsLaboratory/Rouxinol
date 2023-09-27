#include<iostream>
#include<string>
#include<set>
#include<algorithm>

using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        set<string> set;
        string s;
        cin >> s;
        set.insert(s);
        for (int i = 1; i < s.size(); ++i) {
            string front = s.substr(0, i);
            string back = s.substr(i);
            string frontrev = front;
            reverse(frontrev.begin(), frontrev.end());
            string backrev = back;
            reverse(backrev.begin(), backrev.end());

            //cout << front << " " << back << " " << frontrev << " " << backrev << endl;
            set.insert(front + backrev);
            set.insert(frontrev + back);
            set.insert(frontrev + backrev);
            set.insert(backrev + front);
            set.insert(back + frontrev);
            set.insert(backrev + frontrev);
            set.insert(back + front);
        }

        cout << set.size() << endl;
    }
}