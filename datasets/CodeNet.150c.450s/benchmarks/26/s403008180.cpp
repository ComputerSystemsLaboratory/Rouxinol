#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    if(a < b){
        cout << "a < b" << endl;
    }else if(a == b){
        cout << "a == b" << endl;
    }else{
        cout << "a > b" << endl;
    }

    return 0;
}