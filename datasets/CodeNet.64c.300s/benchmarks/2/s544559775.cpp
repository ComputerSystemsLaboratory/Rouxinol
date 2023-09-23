#include <iostream>
using namespace std;

#define A 1
#define B 2
#define C 3
#define D 4
#define E 5
#define F 6

int judge(int mid_score, int fin_score, int re_score)
{
    if(mid_score == -1 || fin_score == -1) return F;
    
    if(mid_score + fin_score >= 80) return A;
    if(mid_score + fin_score >= 65 && mid_score + fin_score < 80) return B;
    if(mid_score + fin_score >= 50 && mid_score + fin_score < 65) return C;

    if(mid_score + fin_score >= 30 && mid_score + fin_score < 50) {
        if(re_score >= 50) return C;
        else return D;
    }

    if(mid_score + fin_score < 30) return F;

    return 0;
}

int main()
{
    // ???????????\???
    int m, f, r;
    int mid_score[512], fin_score[512], re_score[512]; // ??¨???????????????????????????512
    int si = 0;
    while(cin >> m >> f >> r) {
        mid_score[si] = m;
        fin_score[si] = f;
         re_score[si] = r;
        if(m == -1 && f == -1 && r == -1) break;
        si++;
    }

    for(int i = 0; i < si; i++) {
        int result;
        result = judge(mid_score[i], fin_score[i], re_score[i]);

        if(result == A) cout << "A" << endl;
        else if(result == B) cout << "B" << endl;
        else if(result == C) cout << "C" << endl;
        else if(result == D) cout << "D" << endl;
        else if(result == E) cout << "E" << endl;
        else if(result == F) cout << "F" << endl;
        else cout << "error: unknown result" << endl;
    }

    return 0;
}