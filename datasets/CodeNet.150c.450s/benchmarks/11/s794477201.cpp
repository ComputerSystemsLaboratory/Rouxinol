#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <deque>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>

using namespace std;


int main() {
    

    int n;
    cin  >> n;
    int card[4][13] = {{}};
    for (int i=0;i<n;i++){
        char s;
        int k;
        cin >> s >> k;
        if(s == 'S'){
            card[0][k-1] = 1;
        }else if(s == 'H'){
            card[1][k-1] = 1;
        }else if (s == 'C'){
            card[2][k-1] = 1;
        }else{
            card[3][k-1] = 1;
        }
    }
    char soot[4] = {'S','H','C','D'};
    for (int i=0;i<4;i++){
        for (int j=0;j<13;j++)
            if(card[i][j] == 0){
                cout << soot[i] << " " << j+1 << endl;
            }
    }
}
