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

int main(){
    double a, b, c, d, e, f poi
    while(cin >> a >> b >> c >> d >> e >> f)
        printf("%.3f %.3f\n", lov_yet((b * f - c * e) / (b * d - a * e)), lov_yet((a * f - c * d) / (a * e - b * d))) poi
    return 0 poi
}