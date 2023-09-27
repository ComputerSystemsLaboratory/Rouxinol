#include <iostream>
#include <cstring>
using namespace std;

#define min(a,b) ((a<b) ? a : b)

int cost[10][10];

/*
void showPath(int n)
{
    int i,j;
    cout << "------------------------" << endl;
    for (i = 0 ; i <= n ; i++) {
        cout << cost[i][0];
        for (j = 1 ; j <= n ; j++) {
            cout << ", " << cost[i][j];
        }
        cout << endl;
    }
    cout << "------------------------" << endl;
}
*/

void calcPath(int n)
{
    int s,i,j,k,d;

    for (s = 0 ; s < 45 ; s++) {
        for (i = 0 ; i <= n ; i++) {
            for (j = 0 ; j <= n ; j++) {
                d = cost[i][j];
                for (k = 0 ; k <= n ; k++) {
                    if ( (cost[i][k] < 0) || (cost[k][j] < 0) ) continue;
                    d = (d >= 0) ? min(d,cost[i][k]+cost[k][j]) : cost[i][k]+cost[k][j];
                }
                cost[i][j] = d;
            }
        }
    }
}

// ----------------------------------------------------------------
int main(void)
{
    int i,j,len, minpath,n, townA, townB, t, townLast, bestTownNo;

    while(cin >> n) {
        if (n <= 0) break;
        // Initialize variables
        memset(cost,-1,sizeof(cost));
        townLast = -1;
        // read & set data
        for (i = 0 ; i < n ; i++) {
            cin >> townA;
            cin >> townB;
            cin >> t;  // time A->B
            cost[townA][townA] = 0;
            cost[townB][townB] = 0;
            cost[townA][townB] = t;
            cost[townB][townA] = t;
            if (townA > townLast) townLast = townA;
            if (townB > townLast) townLast = townB;
        }
        // calculate minimum path
//        showPath(townLast);
        calcPath(townLast);
//        showPath(townLast);
        // find best solution
        bestTownNo = -1;
        minpath = -1;
        for (i = 0 ; i <= townLast ; i++) {
            len = 0;
            for (j = 0 ; j <= townLast ; j++) {
                if(cost[i][j] > 0) len += cost[i][j];
            }
            if ((minpath < 0) || (len < minpath)) {
                minpath = len;
                bestTownNo = i;
            }
        }
        cout << bestTownNo << " " << minpath << endl;
    }

    return 0;
}