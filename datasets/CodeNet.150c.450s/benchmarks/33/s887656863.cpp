#include <iostream>
#include <set>
using namespace std;

int main(){
    while(true){
        int x, y, s;
        int t;
        set<int> kouho;
        cin >> x >> y >> s;
        if(!(x||y||s)) break;
        for(int i=1;i<s;++i){
            for(int j=1;j<s;++j){
                t = i*(100+x)/100 + j*(100+x)/100;
                if(t>s) break;
                if(t==s){
                    kouho.insert(i*(100+y)/100 + j*(100+y)/100);
                }
            }
        }
        cout << *(kouho.rbegin()) << endl;
    }
}