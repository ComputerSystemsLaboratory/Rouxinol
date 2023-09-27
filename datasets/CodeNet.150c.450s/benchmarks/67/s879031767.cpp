#include <iostream>

using namespace std;

int sum(int start,int length){
    return (start+start+length-1)*length/2;
}



int main() {
    for (; ;) {
        int N;
        cin >>N;
        if (N==0) {
            break;
        }
        int ans=0;
        for (int i=1; i<N; i++) {
            for (int j=2; i+j-1<N; j++) {
                if (sum(i,j)==N) {
                    ans++;
                }
            }
        }
        cout << ans <<endl;
    }
}