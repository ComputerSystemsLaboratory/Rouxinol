#include <iostream>
#include <vector>

using namespace std;

void func(int n)
{
    int Acard, Bcard;
    int Ascore = 0, Bscore = 0;
    for (int i = 0; i < n; ++i) {
        cin >> Acard >> Bcard;
        if (Acard > Bcard) {
            Ascore += Acard + Bcard;
        } else if (Acard < Bcard) {
            Bscore += Acard + Bcard;
        } else if (Acard == Bcard) {
            Ascore += Acard;
            Bscore += Bcard;
        }
    }
    cout << Ascore << " " << Bscore << '\n';
    return;
}

int main()
{
    for (;;) {
        int n;
        cin >> n;
        if (n == 0) break;
        func(n);
    }
    return 0;
}