#include<iostream>
using namespace std;
#include<string>

class dice
{
    int U, S, E, W, N, L;
public:
    dice(int, int, int, int, int, int);
    void roll_1(int);
    void roll_2(int);
    int east();

};

dice::dice(int u, int s, int e, int w, int n, int l) : 
U(u), S(s), E(e), W(w), N(n), L(l){}

void dice::roll_1(int a)
{
    static int i;
    if(U == a) return;
    if(W == a){ i = U; U = W; W = L; L = E; E = i; return; }
    if(E == a){ i = U; U = E; E = L; L = W; W = i; return; }
    if(S == a){ i = U; U = S; S = L; L = N; N = i; return; }
    if(N == a){ i = U; U = N; N = L; L = S; S = i; return; }
    if(L == a){ i = U; U = L; L = i; i = S; S = N; N = i; return; }

    return;
}

void dice::roll_2(int b)
{
    static int j;
    if(S == b) return;
    if(E == b){ j = S; S = E; E = N; N = W; W = j; return; }
    if(W == b){ j = S; S = W; W = N; N = E; E = j; return; }
    if(N == b){ j = S; S = N; N = j; j = E; E = W; W = j; return; }

    return;
}

int dice::east(){ return E; }

int main()
{
    int u, s, e, w, n, l;
    cin >> u >> s >> e >> w >> n >> l;
    dice d = dice(u, s, e, w, n, l);

    int q, a, b;
    cin >> q;

    for(int k = 0; k < q; k++){
        cin >> a >> b;
        d.roll_1(a);
        d.roll_2(b);
        cout << d.east() << endl;
    }
    return 0;
}