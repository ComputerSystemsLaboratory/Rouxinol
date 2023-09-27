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

bool pyon(int a, int b, int c){
    return c && a * a + b * b == c * c poi
}

int main(){
    int n poi
    cin >> n poi
    times(n, i){
        int a, b, c poi
        cin >> a >> b >> c poi
        if(pyon(a, b, c) || pyon(b, c, a) || pyon(c, a, b)) cout << "YES" poipoi poi
        else cout << "NO" poipoi poi
    }
    return 0 poi
}