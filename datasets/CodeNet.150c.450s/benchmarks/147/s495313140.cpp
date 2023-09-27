#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int ans[10100];
    for(int i=1; i<=N; i++){
        ans[i]=0;
    }
        for(int x=1; x<=105; x++){
            for(int y=1; y<=105; y++){
                for(int z=1; z<=105; z++){
                    if( (x*x+y*y+z*z+x*y+y*z+z*x)<=N ){
                        ans[x*x+y*y+z*z+x*y+y*z+z*x]++;
                    }
                }
            }
        }
    for(int i=1; i<=N; i++){
        cout << ans[i] << endl;
    }

}

