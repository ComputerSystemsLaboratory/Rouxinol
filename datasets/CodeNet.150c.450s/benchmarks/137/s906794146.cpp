#include<bits/stdc++.h>
using namespace std;
#define INF 1LL<<30
#define MAXN 1000003
#define pb push_back
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define B 127
#define endl '\n'
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
const int  ALF = 5;
struct nodo{
    int termina;
    int hijos[ALF];
    nodo(){
        termina = -1;
        for(int i = 0; i < ALF; i++){
            hijos[i] = -1;
        }
    }
};
nodo Trie[MAXN];

int ultimo = 1;
int valor(char c){
    if(c == 'A') return 1;
    if(c == 'C') return 2;
    if(c == 'G') return 3;
    if(c == 'T') return 4;
}

void Agregar(string &s, int idx){
    int pos = 0;

    for(int i = 0; i<s.size(); i++){
        if(Trie[pos].hijos[valor(s[i])] == -1){
            ultimo++;
            Trie[pos].hijos[valor(s[i])] = ultimo;
        }
        pos = Trie[pos].hijos[valor(s[i])];

    }
    if(Trie[pos].termina == -1){
        Trie[pos].termina = idx;
    }

}

bool Busca(string &s){
    int pos = 0;
    for(int i = 0; i<s.size(); i++){
        pos = Trie[pos].hijos[valor(s[i])];
        if(pos == -1) return false;
    }
    if(Trie[pos].termina == -1) return false;
    return true;
}



int main(){
    int n;

    cin >> n;
    cin.ignore();
    int diff = 1;
    for(int t = 1; t<=n; t++){
        string q,p;
        cin >> q >> p;
        if(q == "insert"){

            Agregar(p,diff);
            diff++;
        }else{
            if(Busca(p)){
                cout << "yes";
            }else{
                cout << "no";
            }
            cout << endl;
        }
    }

    return 0;

}

