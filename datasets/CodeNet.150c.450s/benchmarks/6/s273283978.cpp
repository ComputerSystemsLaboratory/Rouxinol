#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
        int a,b,c;
        std::cin >> a >> b >> c;
        if (a < b && b < c) {
                cout << "Yes\n";
        } else {
                cout << "No\n";
        }
        return 0;       
}