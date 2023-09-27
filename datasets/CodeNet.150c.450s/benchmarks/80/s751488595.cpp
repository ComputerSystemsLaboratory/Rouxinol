#include <iostream>

using namespace std;

int main()
{
    int A,B,C,D,E,F,G,H,S,T;
    cin >> A >> B >> C >> D >> E >> F >> G >> H;
    S=A+B+C+D;
    T=E+F+G+H;
    cout << (S>T?S:T) << endl;
    return 0;
}