#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    // input from txt （提出時にこの箇所は削除すること）
    std::ifstream in("in.txt");
    std::cin.rdbuf(in.rdbuf());
    
    
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);

    int a,b, c;
    cin >> a >> b >> c;
    if (a < b && b < c) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
