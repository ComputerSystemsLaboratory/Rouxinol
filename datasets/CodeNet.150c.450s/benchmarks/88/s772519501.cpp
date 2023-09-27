#include <bits/stdc++.h>

using namespace std;

// 多次元 mul_array<int, 1, 2, 3> a
//template <typename T, std::size_t... Ns>
//struct index_reverse_for_array;
//template <typename T, std::size_t N, std::size_t... Ns>
//struct index_reverse_for_array<T, N, Ns...> { using type = std::array< typename index_reverse_for_array<T, Ns...>::type, N>; };
//template <typename T, std::size_t N>
//struct index_reverse_for_array<T, N> { using type = std::array<T, N>; };
//template <class T, std::size_t... Ns> using mul_array = typename index_reverse_for_array<T, Ns...>::type;
//
//using u32 = uint32_t;
//using s32 = uint32_t;
//using u64 = uint64_t;
//using s64 = uint64_t;

int main() {
    //cout << fixed << setprecision(10);

    while (true) {
        int w, h;
        cin >> h >> w;
        if (w == 0 && h == 0) break;

        bool f = true;
        int www, hhh;
        for (int s = w * w + h * h; f; s++) {
            int i;
            if (s == w * w + h * h) i = h + 1;
            else i = 1;

            for (; i <= s && f; i++) {
                if (i <= 150 && f) {
                    hhh = i;
                    if (s - (i * i) <= 0)
                        break;
                    double ww = sqrt(s - (i * i));
                    www = sqrt(s - (i * i));
                    if (ww == www && hhh < www)
                        f = false;
                }
            }
        }

        cout << hhh << " " << www << endl;

    }

    return 0;
}




