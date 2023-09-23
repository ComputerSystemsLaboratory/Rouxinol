#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int i, j;
    cin >> i >> j;
    if(i > j)
        cout << "a" << " > " << "b" <<endl;
    else if(i < j)
        cout << "a" << " < " << "b" << endl;
    else
        cout << "a" << " == " << "b" << endl;
}