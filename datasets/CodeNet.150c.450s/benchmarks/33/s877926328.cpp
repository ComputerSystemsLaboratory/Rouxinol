#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int x,y,s;
    while(cin >> x >> y >> s &&x!=0&&y!=0&&s!=0){
        int ans = 0;
        for(int i=1;i<1000;i++){
            for(int j=1;j<1000;j++){
                if((i*(100+x))/100 + (j*(100+x))/100 == s){
                    ans = max(i*(100+y)/100 + j*(100+y)/100,ans);
                }
            }
        }

        cout << ans << endl;
    }



    return 0;
}
