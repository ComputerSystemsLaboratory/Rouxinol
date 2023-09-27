#include <bits/stdc++.h>
using namespace std;

#define times(n, i)      uptil(0, n, i)
#define upto(f, t, i)    for(decltype(t) _##i = (t), i = (f); i <= _##i; i++)
#define uptil(f, t, i)   for(decltype(t) _##i = (t), i = (f); i < _##i; i++)
#define downto(f, t, i)  for(decltype(t) _##i = (t), i = (f); i >= _##i; i--)
#define downtil(f, t, i) for(decltype(t) _##i = (t), i = (f); i > _##i; i--)
#define unless(c) if(!(c))
#define until(c) while(!(c))
#define loop while(true)

#define all(v) v.begin(), v.end()
#define ln << "\n"

struct line{};

template<class T> istream& operator>>(istream& in, vector<T>& v) {
    times(v.capacity(), i) in >> v[i];
    return in;
}

template<class T> const ostream& operator<<(ostream& out, const vector<T>& v) {
    times(v.size(), i) out << (i ? " " : "") << v[i];
    return out;
}

template<class T, class...U> typename enable_if<is_same<T, line>::value, string>::type next(istream& in, const U&... args) {
    string s;
    getline(in, s, args...);
    return move(s);
}

template<class T, class...U> typename enable_if<!is_same<T, line>::value, T>::type next(istream& in, const U&... args) {
    T t(args...);
    in >> t;
    return move(t);
}
template<class T, class...U> auto next(const U&... args) -> decltype(next<T>(cin)) {
    return next<T>(cin, args...);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    loop {
        int N = 1000 - next<int>(), ans = 0;
        if(N == 1000) break;

        for(int coin : {500, 100, 50, 10, 5, 1}) {
            ans += N / coin;
            N %= coin;
        }

        cout << ans ln;
    }

    return 0;
}