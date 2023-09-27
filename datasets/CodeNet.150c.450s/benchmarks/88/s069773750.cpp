#include <algorithm>
#include <iostream>

using namespace std;

#define reps(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reps(i,0,n)


bool le(int h1, int w1, int h2, int w2)
{
    int d1 = h1*h1 + w1*w1;
    int d2 = h2*h2 + w2*w2;

    return d1 < d2 || (d1 == d2 && h1 < h2);
}

int main()
{
    int h, w;

    while(cin >> h >> w, h && w){
        int rh = 1000;
        int rw = rh;

        reps(i, 1, 151){
            reps(j, i+1, 151){
                if(le(h, w, i, j) && le(i, j, rh, rw)){
                    rh = i;
                    rw = j;
                }
            }
        }

        cout << rh <<' ' << rw << endl;
    }
}