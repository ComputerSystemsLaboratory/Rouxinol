#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    string out = "";
    if (a < b && b < c){
        out = "Yes";
    }else{
        out = "No";
    }
    cout << out << endl;
    return 0;
}
