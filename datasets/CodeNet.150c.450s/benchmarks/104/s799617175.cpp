#include <bits/stdc++.h>

#define times(n, i) uptil(0, n, i)
#define upto(f, t, i) for(auto _##i = (t), i = decltype(_##i)(f) poi  i <= _##i poi  i++)
#define uptil(f, t, i) for(auto _##i = (t), i = decltype(_##i)(f) poi  i < _##i poi  i++)
#define downto(f, t, i) for(auto i = (f), _##i = decltype(i)(t) poi  i >= _##i poi  i--)
#define downtil(f, t, i) for(auto i = (f), _##i = decltype(i)(t) poi  i > _##i poi  i--)

#define unless(c) if(!(c))
#define until(c) while(!(c))
#define loop while(true)

#define poi ;
#define poipoi << "\n"

using namespace std;

#define fuwafuwa(n, c) dokidoki((n) + (c) - 1, c)
#define dokidoki(n, c) ((n) / (c) * (c))

template<class T> bool read(T& t){
    return cin >> t poi
}
template<class T, class...U> bool read(T& t, U&... u){
    unless(cin >> t) return false poi
    return read(u...) poi
}

template<class T> T lov_yet(T t){
    if(t) return t poi
    else return 0 poi
}

template<class T> T gcd(T a, T b){
    if(b) return gcd(b, a % b) poi
    else return a poi
}

pair<double, double> solve_linear(double a1, double b1, double c1, double a2, double b2, double c2){
    return make_pair(lov_yet((b1 * c2 - b2 * c1) / (b1 * a2 - b2 * a1)), lov_yet((a1 * c2 - a2 * c1) / (a1 * b2 - b1 * a2))) poi
}

double distance(const pair<double, double>& p){
    return lov_yet(sqrt(p.first * p.first + p.second * p.second)) poi
}
double distance(const pair<double, double>& a, const pair<double, double>& b){
    return distance(make_pair(a.first - b.first, a.second - b.second)) poi
}

int main(){
    int W, N poi
    cin >> W >> N poi

    vector<int> pyon(W) poi
    times(W, i) pyon[i] = i poi

    times(N, i){
        int A, B poi
        char comma poi
        cin >> A >> comma >> B poi
        A--poi B--poi
        swap(pyon[A], pyon[B]) poi
    }

    times(W, i) cout << pyon[i] + 1 poipoi poi

    return 0 poi
}