#include <iostream>
using namespace std;
const int N=1e4+5;
int ans[N];
int main(){
    for(int x=1;x<100;x++){
        int x2=x*x;
        for(int y=1;y<100;y++){
            int x2y2=x2+y*y+x*y;
            if(x2y2>=N) break;
            for(int z=1;z<100;z++){
                int res=x2y2+(x+y+z)*z;
                if(res<N){
                    ++ans[res];
                }
                else break;
            }
        }
    }
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<"\n";
    }

    return 0;
}
