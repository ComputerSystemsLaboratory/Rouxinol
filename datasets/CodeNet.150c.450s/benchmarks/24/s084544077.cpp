#include <utility>
#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    while(cin >> N >> M && N){
        int d, p;
        pair<int, int> PD[10010];
        for(int i=0; i<N; ++i){
            cin >> d >> p;
            PD[i] = make_pair(p, d);
        }
        sort(PD, PD+N);
        reverse(PD, PD+N);
        int ex = 0;
        for(int i=0;i<N;++i){
            if(M >= PD[i].second) M -= PD[i].second;
            else{
                ex += (PD[i].second - M) * PD[i].first;
                M = 0;
            }
        }
        cout << ex << endl;
    }
    return 0;
}