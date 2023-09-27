#include <iostream>
#include <vector>
using namespace std;

void show_v( vector<int> v ){
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout << *it << ' ';
    }
    cout << endl;
}

int main(){
    int n, r, i, j, p, c;
    while( cin >> n >> r, n||r ){
        vector<int> card(n);
        for(i = 0; i < n; i++){
            card[i] = n-i;
        }
        while( r-- > 0 ){
            cin >> p >> c;
            vector<int> tmp;
            tmp.assign( card.begin()+p-1, card.begin()+p+c-1 );
            card.erase( card.begin()+p-1, card.begin()+p+c-1 );
            tmp.insert( tmp.end(), card.begin(), card.end() );
            card.assign( tmp.begin(), tmp.end() );
        }
        cout << card[0] << endl;
    }
    return 0;
}