#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a,b,n;
    vector<vector<int> > p;
    vector<int> temp;

    int x,y;
    cin >> a >> b;
    while(a!=0 && b!=0) {
        cin >> n;
        for(int i=0; i<=a; ++i) {
            for(int j=0; j<=b; ++j) {
                temp.push_back(0);
            }
            p.push_back(temp);
            temp.clear();
        }

        for(int i=0; i<n; ++i) {
            cin >> x >> y;
            p[x][y]=-1;
        }

        p[0][1]=1;
        for(int i=1; i<=a; ++i) {
            for(int j=1; j<=b; ++j) {
                if(p[i][j]!=-1) {
                    p[i][j]+=p[i][j-1]+p[i-1][j];
                } else {
                    p[i][j]=0;
                }
            }
        }
        cout << p[a][b] << endl;
        cin >> a >> b;
        p.clear();
    }

    return 0;
}