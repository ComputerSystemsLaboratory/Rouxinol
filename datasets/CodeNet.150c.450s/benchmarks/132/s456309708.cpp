#include <bits/stdc++.h>
using namespace std;

int main() {

    while(true){

        int n,p;

        cin >> n >> p;

        if(n == 0){
            break;
        }

        int maxp = p;

        list<pair<int,int> > l;

        for(int i=0; i<n; i++){
            l.push_back(make_pair(0,i));
        }

        list<pair<int,int> >::iterator itr = l.begin();

        while(true){

            if(p > 0){
                p--;
                itr->first++;
                if(itr->first == maxp){
                    cout << itr->second << endl;
                    break;
                }
            }
            else{
                p += itr->first;
                itr->first = 0;
            }

            itr++;

            if(itr == l.end()){
                itr = l.begin();
            }

        }

    }

    return 0;
}
