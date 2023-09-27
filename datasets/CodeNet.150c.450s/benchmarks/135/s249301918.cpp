#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, M;
    while(cin >> N >> M && N > 0){
        vector<int> h(N);
        vector<int> w(M);
        for(int i = 0; i < N; i++)
		{
            cin >> h[i];
		}
        for(int i = 0; i < M; i++)
		{
            cin >> w[i];
		}
        int count = 0;
        int H,W;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                int p = i;
                int q = j;
                H = 0;
                W = 0;
                while(1){
                    if(H >= W){
                        W += w[q];
                        q++;
                        if(q > M) break;
                    }else{
                        H += h[p];
                        p++;
                        if(p > N) break;
                    }

                    if(H == W){
                        
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
}