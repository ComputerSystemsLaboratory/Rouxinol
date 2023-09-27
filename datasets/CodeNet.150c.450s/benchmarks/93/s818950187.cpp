#include<iostream>
#include<algorithm>
#include<tuple>
using namespace std;
pair<int, int>x[1000000]; tuple<int, int, int>y[1000000]; int Hush[1000000], Hush2[1000000], n, a; char c, T[5] = "HDSC";
int partition(int p, int r) { int X = x[r].second; int I = p - 1; for (int i = p; i < r; i++) { if (x[i].second <= X) { I++; swap(x[I], x[i]); } }swap(x[I + 1], x[r]); return I + 1; }
void quicksort(int p, int r) { if (p < r) { int q = partition(p, r); quicksort(p, q - 1); quicksort(q + 1, r); } }
int main() {
	cin >> n; for (int i = 0; i < n; i++) { cin >> c >> a; int R = 0; for (int j = 0; j < 4; j++) { if (T[j] == c) { R = j; } }x[i] = make_pair(R, a); y[i] = make_tuple(a, i, R); }
	quicksort(0, n - 1); sort(y, y + n); for (int i = 0; i < n; i++) { Hush[i] = x[i].second * 100 + x[i].first; Hush2[i] = get<0>(y[i]) * 100 + get<2>(y[i]); }
	int Stable = 1; for (int i = 0; i < n; i++) { if (Hush[i] != Hush2[i]) { Stable = 0; } }if (Stable == 1) { cout << "Stable" << endl; }
	else { cout << "Not stable" << endl; }for (int i = 0; i < n; i++) { cout << T[x[i].first] << ' ' << x[i].second << endl; }return 0;
}