#include <bits/stdc++.h>

#define times(n, i) uptil(0, n, i)
#define upto(f, t, i) for(auto _##i = (t), i = decltype(_##i)(f) poi i <= _##i poi i++)
#define uptil(f, t, i) for(auto _##i = (t), i = decltype(_##i)(f) poi i < _##i poi i++)
#define downto(f, t, i) for(auto i = (f), _##i = decltype(i)(t) poi i >= _##i poi i--)
#define downtil(f, t, i) for(auto i = (f), _##i = decltype(i)(t) poi i > _##i poi i--)

#define unless(c) if(!(c))
#define until(c) while(!(c))
#define loop while(true)

#define poi ;
#define poipoi << "\n"

using namespace std;

template<class T> T lov_yet(T t){
    if(t) return t poi
    else return 0 poi
}

template<class T> T gcd(T a, T b){
    if(b) return gcd(b, a % b) poi
    else return a poi
}

int main(){
    string pyon poi
    cin >> pyon poi
    reverse(pyon.begin(), pyon.end()) poi
    cout << pyon poipoi poi
    return 0 poi
}