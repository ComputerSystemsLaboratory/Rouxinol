#include<cstdio>
#include<iostream>
#include<algorithm>
#include<set>


using namespace std;

int main(void) {
    int m;
    cin >> m;

    for(int i=0; i<m; i++) {
        set<string> s;
        string in,first,second;
        cin >> in;

        second = in;
        while(!second.empty()) {
            first += second[0];
            second.erase(0,1);

            s.insert(first+second);
            s.insert(second+first);
            reverse(first.begin(), first.end());
            s.insert(first+second);
            s.insert(second+first);
            reverse(second.begin(), second.end());
            s.insert(first+second);
            s.insert(second+first);
            reverse(first.begin(), first.end());
            s.insert(first+second);
            s.insert(second+first);
            reverse(second.begin(), second.end());
        }

        cout << s.size() << endl;
    }
    return 0;
}