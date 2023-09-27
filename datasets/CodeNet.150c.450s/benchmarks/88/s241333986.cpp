#include <iostream>
#include <set>
using namespace std;

int main(){
    set<pair<int, pair<int, int> > > s;
    for(int i=1;i<=200;++i){
        for(int j=1;j<i;++j){
            s.insert(make_pair(i*i+j*j,make_pair(j,i)));
        }
    }
    while(true){
        int h, w;
        set<pair<int, pair<int, int> > >::iterator it;
        cin >> h >> w;
        if(!(h||w)) break;
        it = s.find(make_pair(h*h+w*w,make_pair(h, w)));
        ++it;
        cout << (*it).second.first << ' ' << (*it).second.second << endl;
    }
}