#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    cin >> x;
    cout << x/(60*60) << ":" << (x%(60*60))/60 << ":" << (x%60) << "\n";
    return 0;
}