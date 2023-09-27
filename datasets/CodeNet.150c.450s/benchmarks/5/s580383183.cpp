#include <iostream>
using namespace std;

int main() {
    int n;
    string m = "",str = "";

    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> m;
        if(i!=n-1)
            str = " " + m + str;
        else
            str = m + str;
    }
    cout << str << endl;
}