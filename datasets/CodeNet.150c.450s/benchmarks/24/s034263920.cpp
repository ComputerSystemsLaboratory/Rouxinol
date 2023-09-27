#include <algorithm>
#include <iostream>
using namespace std;
int N, M;
pair<int,int> PD[10010];
int main() {
    while (cin >> N >> M && N) {
        int d, p;
        int sum;
        for (int i=0; i<N; i++) {
            cin >> d >> p;
            PD[i] = make_pair(p, d);
        }
        
        sort(PD, PD+N);
        sum = 0;
        for (int i=N-1; i >=0; i--) {
            for (int l=0; l < PD[i].second; ++l) {
                if (M > 0) {
                    M -= 1;
                } else {
                    sum += PD[i].first;
                }
                
            }
        }
        cout << sum << endl;
    }
    
}
