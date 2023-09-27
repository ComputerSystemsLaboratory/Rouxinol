#include <iostream>
#include <set>
using namespace std;

int main(){
    while(true){
        int n, m;
        int d, p;
        multiset<pair<int, int> , greater<pair<int, int> > > s;
        multiset<pair<int, int> , greater<pair<int, int> > >::iterator it;
        int e=0;
        cin >> n >> m;
        if(!(n||m)) break;
        for(int i=0;i<n;++i){
            cin >> d >> p;
            s.insert(make_pair(p, d));
        }
        it = s.begin();
        while(it != s.end() && m > 0){
            m -= (*it).second;
            ++it;
        }
        if(m < 0){
            --it;
            e += (*it).first * (-m);
            ++it;
        }
        while(it != s.end()){
            e += (*it).second * (*it).first;
            ++it;
        }
        cout << e << endl;
    }
}