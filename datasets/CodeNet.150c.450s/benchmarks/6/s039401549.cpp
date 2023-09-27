#include <iostream>
using namespace std;

void judge(){
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a < b)
    {
        if(b<c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }
}
int main(int argc, const char * argv[]) {
    judge();
    return 0;
}