#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int n,r;
    while(scanf("%d%d",&n,&r),n!=0){
        int card[51];
        for(int i=0;i<51;i++){
            card[i] = n-i;
        }

        while(r--){
            int p,c;
            cin >> p >> c;
            int tmp[51];
            for(int i=0;i<p-1;i++){
                tmp[i] = card[i];
            }
            for(int i=0;i<c;i++){
                card[i] = card[p-1+i];
            }
            for(int i=c;i<c+p-1;i++){
                card[i] = tmp[i-(c)];
            }
        }

        cout << card[0] << endl;
    }
    return 0;
}