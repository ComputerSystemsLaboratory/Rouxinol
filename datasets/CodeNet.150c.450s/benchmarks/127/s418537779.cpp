#include <string>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string train,former,latter;
        cin >> train;
        typedef set<string> set_t;
        set_t C;
        for(int divp=1;divp<train.size();divp++){
            former=train.substr(0,divp);
            latter=train.substr(divp);
            C.insert(former+latter);
            C.insert(latter+former);
            reverse(former.begin(),former.end());
            C.insert(former+latter);
            C.insert(latter+former);
            reverse(latter.begin(),latter.end());
            C.insert(former+latter);
            C.insert(latter+former);
            reverse(former.begin(),former.end());
            C.insert(former+latter);
            C.insert(latter+former);
        }
        cout << C.size() << endl;
    }
}