#include <bits/stdc++.h>
using namespace std;

int main() {

    while(1){

        int x,y,s;

        cin >> x >> y >> s;

        if(x==0 && y==0 && s==0) break;

        int ans = -1;

        map<int,int> tax_excluded;

        for(int i=1; i<s; i++){
            tax_excluded[i*(100+x)/100] = i;
        }



        for(int i=1; i<s; i++){

            int a,b;

            a = tax_excluded[i]; b = tax_excluded[s-i];
            
            a = a * (100 + y) / 100;
            b = b * (100 + y) / 100;

            ans = max(ans,a+b);
        }


        cout << ans << endl;

    }

    return 0;
}
