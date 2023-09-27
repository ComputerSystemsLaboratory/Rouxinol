#include<iostream>
using namespace std;
#include<string>

class dice
{
    int U, S, E, W, N, L;
public:
    dice(int, int, int, int, int, int);
    void roll(char);
    int upper();
};

dice::dice(int u, int s, int e, int w, int n, int l) : 
U(u), S(s), E(e), W(w), N(n), L(l){}

void dice::roll(char v)
{
    static int i;
    if(v == 'E'){ i = U; U = W; W = L; L = E; E = i; }
    if(v == 'W'){ i = U; U = E; E = L; L = W; W = i; }
    if(v == 'N'){ i = U; U = S; S = L; L = N; N = i; }
    if(v == 'S'){ i = U; U = N; N = L; L = S; S = i; }

    return;
}

int dice::upper()
{
    return U;
}

int main()
{
    int u, s, e, w, n, l;
    cin >> u >> s >> e >> w >> n >> l;
    dice d = dice(u, s, e, w, n, l);

    string route;
    cin >> route;

    for(int i = 0; route[i]; i++){
        d.roll(route[i]);
    }

    cout << d.upper() << endl;

    return 0;
}