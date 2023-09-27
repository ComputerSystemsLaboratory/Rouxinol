#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

void shuffle(int card[], int p, int c);

int main()
{
    int n, r;
    while(1){
        cin >> n >> r;
        if(n == 0 && r == 0) break;
        int card[50];
        for(int i = 0; i < n; i++){
            card[n - 1 - i] = i + 1;
        }
        int p, c;
        for(int i = 0; i < r; i++){
            cin >> p >> c;
            shuffle(card, p, c);
        }
        cout << card[0] << endl;
    }
    return 0;
}

void shuffle(int card[], int p, int c)
{
    int hozon[50];
    for(int i = 0; i < p - 1; i++){
        hozon[i] = card[i];
    }
    for(int i = 0; i < c; i++){
        card[i] = card[i + p - 1];
    }
    for(int i = 0; i < p - 1; i++){
        card[c + i] = hozon[i];
    }
    return;
}