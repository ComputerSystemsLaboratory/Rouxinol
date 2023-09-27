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

int main(){
	vector<int> pyon(10) poi
    times(10, i) cin >> pyon[i] poi
    sort(pyon.begin(), pyon.end(), greater<int>()) poi
    times(3, i) cout << pyon[i] poipoi poi
    return 0 poi
}