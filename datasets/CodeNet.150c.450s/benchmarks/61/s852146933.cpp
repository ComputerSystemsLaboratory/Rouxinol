#include <iostream>
#include <vector>

using namespace std;


int main(){
    while(true){
        int N,A,B,C,X;
        cin >> N >> A >> B >> C >> X;

        if(N==0) break;
        vector<int> Y(N);
        for(int j=0;j<N;j++) cin >> Y[j];

        int ind = 0;
        int s=0;
        for(int i=0;i<10002;i++){
            if(Y[ind] == X){
                ind++;
            }
            s = i;
            if(ind == Y.size()){
                break;
            }
            X = (A*X+B) % C;
        }
        if(s == 10001) cout << -1 << endl;
        else cout << s << endl;
    }
}