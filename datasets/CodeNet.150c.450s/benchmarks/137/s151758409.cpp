#include<string>
#include<iostream>
#include<set>
using namespace std;

set<string> data;
char *ans[1000000];
int num = 0;

int main() {
    int n;
    string a,b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a == "insert") {
            data.insert(b);
        }
        else if (a == "find") {
            if (data.find(b) == data.end())
                ans[num] = "no";
            else
                ans[num] = "yes";
            num++;
        }
    }
    for (int i = 0; i < num; i++)
        cout << ans[i] << endl;
    return 0;
}