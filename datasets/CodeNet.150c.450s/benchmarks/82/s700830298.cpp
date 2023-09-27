#include <bits/stdc++.h>

using ll=long long;
using namespace std;

#define rep_i(i, n) for (int i = 0; i < (n); ++i)
#define rep_ll(i, n) for (long long i = 0; i < (n); ++i)
#define r_rep_i(i, start, end) for (int i = (start); i < (end); ++i)
#define r_rep_ll(i, start, end) for (long long i = (start); i < (end); ++i)
#define debug_vi(v) copy((v).begin(), (v).end(), ostream_iterator<int>(cout, " "));
#define debug_vll(v) copy((v).begin(), (v).end(), ostream_iterator<long long>(cout, " "));
#define debug_vd(v) copy((v).begin(), (v).end(), ostream_iterator<double>(cout, " "));
#define sort_v(v) sort((v).begin(), (v).end()); //昇順
#define d_sort_vi(v) sort((v).begin(), (v).end(), greater<int>()); //降
#define d_sort_vll(v) sort((v).begin(), (v).end(), greater<long long>()); //降
#define d_sort_vd(v) sort((v).begin(), (v).end(), greater<double>()); //昇順
#define say(t) cout << (t) << endl;
#define sum_vi(v) accumulate((v).begin(), (v).end(), 0);
#define sum_vll(v)accumulate((v).begin(), (v).end(), 0LL);

ll gcd(ll a, ll b) { return b?gcd(b, a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a, b)*b;}

const int IINF=(1<<30);
const ll LLINF = 1LL<<60;

char BigAlphaToSmall(char a){
    if (a >= 65 && a <= 90){
        return a + 32;
    }
    return a;
}

char SmallAlphaToBig(char a){
    if (a >= 97 && a <= 122){
        return a - 32;
    }
    return a;
}

class Dice{
    public:
        int top;
        int button;
        int south;
        int north;
        int east;
        int west;
        void to_south();
        void to_north();
        void to_east();
        void to_west();
        char position_of(int a);
        void roll_east();
        void roll_west();
};

void Dice::to_south(){
    int tmp;
    tmp = this->button;
    this->button = this->south;
    this->south = this->top;
    this->top = this->north;
    this->north = tmp;
}

void Dice::to_north(){
    int tmp;
    tmp = this->button;
    this->button = this->north;
    this->north = this->top;
    this->top = this->south;
    this->south = tmp;
}

void Dice::to_east(){
    int tmp;
    tmp = this->button;
    this->button = this->east;
    this->east = this->top;
    this->top = this->west;
    this->west = tmp;
}

void Dice::to_west(){
    int tmp;
    tmp = this->button;
    this->button = this->west;
    this->west = this->top;
    this->top = this->east;
    this->east = tmp;
}

void Dice::roll_east(){
    int tmp;
    tmp = this->south;
    this->south = this->west;
    this->west = this->north;
    this->north = this->east;
    this->east = tmp;
}

void Dice::roll_west(){
    int tmp;
    tmp = this->south;
    this->south = this->east;
    this->east = this->north;
    this->north = this->west;
    this->west = tmp;
}

char Dice::position_of(int a){
    if (this->top == a) {
        return 'T';
    }
    if (this->button == a) {
        return 'B';
    }
    if (this->north == a) {
        return 'N';
    }
    if (this->south == a) {
        return 'S';
    }
    if (this->east == a) {
        return 'E';
    }
    if (this->west == a) {
        return 'W';
    }
    return 'Z';
};

Dice NewDice(vector<int> v){
    Dice d;
    d.top = v[0];
    d.south = v[1];
    d.east = v[2];
    d.west = v[3];
    d.north = v[4];
    d.button = v[5];
    return d;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    vector<int> hoge(6);
    for (int i = 0; i < 6; i++){
        cin >> hoge[i];
    }
    Dice d;
    d = NewDice(hoge);
    int cmds;
    cin >> cmds;

    int a, b;
    bool top_f = false;
    for (int i = 0; i < cmds; i++){
        // cout << "###";
        // cout << i << endl;
        top_f = false;
        cin >> a >> b;
        for (int c = 0; c < 100; c++){
            if(d.top == a){
                top_f = true;
                break;
            }
            d.to_north();
        }
        if(!top_f){
            for (int c = 0; c < 100; c++){
                if(d.top == a){
                    break;
                }
                d.to_east();
            }
        }
        for (int c = 0; c < 100; c++){
            if(d.south == b){
                break;
            }
            d.roll_west();
        }
        cout << d.east << endl;
    }
}
