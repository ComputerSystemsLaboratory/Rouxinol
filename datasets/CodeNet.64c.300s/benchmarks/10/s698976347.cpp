#include <iostream>
#include <cstdlib>

using namespace std;

int a, b;

int main()
{
    while(true){
        cin >> a >> b;
        if(a==0 && b==0) break;
        if(a>b){
            cout << b << " " << a << endl;
        } else {
            cout << a << " " << b << endl;
        }
    }
}


