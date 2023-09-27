#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};

int main(){
    while(1){
        int n;
        cin >> n;
        if(n==0) break;

        int xmin,xmax,ymin,ymax;
        xmin = xmax = ymin = ymax = 0;
        vector<pair<int,int> > sq(n);
        sq[0] = make_pair(0,0);

        for(int i=1; i<n; i++){
            int n,d,x,y;
            cin >> n >> d;
            x = sq[n].first + dx[d];
            y = sq[n].second + dy[d];
            sq[i] = make_pair(x,y);
            xmin = min(x, xmin);
            ymin = min(y, ymin);
            xmax = max(x, xmax);
            ymax = max(y, ymax);
        }
        cout << xmax-xmin+1 << " " << ymax-ymin+1 << endl;   
    }
    return 0;
}