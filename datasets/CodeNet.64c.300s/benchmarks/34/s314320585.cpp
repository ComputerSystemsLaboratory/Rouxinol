// 挿入ソートアルゴリズム

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <cmath>
#include <functional>
#include <fstream>
#include <cstdlib>
typedef long long ll;

#define REP(i, N) for (int i = 0; i < (N); i++)
#define REPP(i, a, b) for (int i = (a); i < (b); i++)
#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define VSORT(c) sort((c).begin(),(c).end())
#define SZ(x) ((int)(x).size())

using namespace std;


int main(){
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    int array[N];
    REP(i,N){
        cin >> array[i];
    }
     REP(k,N){
            cout << array[k];
            if(k != N-1) cout << " ";
        }
        cout << endl;

    REPP(i,1,N){
        int tmpArray = array[i];
        int j = i-1;
        while(j >= 0 && tmpArray < array[j]){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = tmpArray;

        //アルゴリズム確認の表示用
        REP(k,N){
            cout << array[k];
            if(k != N-1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
