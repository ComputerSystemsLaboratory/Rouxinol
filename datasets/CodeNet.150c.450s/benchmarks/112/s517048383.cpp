#include <bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        int n,m;
        cin >> n;
        if(n == 0){break;}
        vector<char> mae(n);
        vector<char> ato(n);
        for(int i=0 ; i < n ; ++i){
            cin >> mae.at(i) >> ato.at(i);
        }
        cin >> m;
        vector<char> c(m);
        for(int i = 0; i< m ; ++i){
            cin >>c.at(i);
            for(int j = 0; j < n ; ++j){
                if( c.at(i) == mae.at(j) ){
                    c.at(i) = ato.at(j);
                    break;
                }
            }
            cout<<c.at(i);
        }
        cout<<endl;
    }
}
