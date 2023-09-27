#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    while(true){
        int n, s, d;
        int xmin=0, xmax=0, ymin=0, ymax=0;
        vector<pair<int, int> > square;
        cin >> n;
        if(!n) break;
        square.push_back(make_pair(0, 0));
        for(int i=0;i<n-1;++i){
            cin >> s >> d;
            if(d==0) square.push_back(make_pair(square[s].first-1,square[s].second));
            else if(d==1) square.push_back(make_pair(square[s].first,square[s].second-1));
            else if(d==2) square.push_back(make_pair(square[s].first+1,square[s].second));
            else if(d==3) square.push_back(make_pair(square[s].first,square[s].second+1));
        }
        for(int i=0;i<n;++i){
            xmin = min(xmin, square[i].first);
            xmax = max(xmax, square[i].first);
            ymin = min(ymin, square[i].second);
            ymax = max(ymax, square[i].second);
        }
        cout << xmax-xmin+1 << ' ' << ymax-ymin+1 << endl;
    }
}