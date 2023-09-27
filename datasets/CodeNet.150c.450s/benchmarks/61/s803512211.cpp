#include<iostream>
using namespace std;
int main(){
    int N,A,B,C,X;
    int y[100];
    const int ans = -1;
    while(1){
        int count = -1,n,k=0;
        cin >> N >> A >> B >> C >> X;
        n = N;
        if(N==0&&A==0&&B==0&&C==0&&X==0)break;
        for(int i = 0;i<N;i++){
            cin >> y[i];
        }
        while(n!=0){
            if(X==y[k]){
                k++;
                n--;
            }
            X = (A*X+B)%C;
            count++;
            if(count>10000)break;
        }
        if(count <= 10000){
            cout << count <<endl;
            //cout << ans << endl;
        }else{
            cout << ans << endl;
            //cout << count <<endl;
        }
    }
    return 0;
}
