#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

#define TEST 0
#if TEST
FILE* in = freopen("./Q.txt", "r", stdin);
FILE* out = freopen("./A.txt", "w",stdout);
#endif

#define MAXN 300
#define MAXINPUT 1000001

vector<int> seq;
int normalAns[MAXINPUT];
int oddAns[MAXINPUT];

int main(int argc, const char * argv[]) {
    for(int i = 0; i < MAXN; i++){
        seq.push_back(i*(i + 1)*(i + 2)/6);
    }
    
    for(int i = 0; i < MAXINPUT; i++){
        normalAns[i] = oddAns[i] = i;
        for(int j = 0; i - seq[j] >= 0; j++){
            normalAns[i] = min(normalAns[i], normalAns[i-seq[j]] + 1);
            if(seq[j]&1) oddAns[i] = min(oddAns[i], oddAns[i-seq[j]] + 1);
        }
    }
    
    while(1){
        int n; cin >> n;
        if(!n) break;
        
        cout << normalAns[n] << " " << oddAns[n] << endl;
    }
    
#if TEST
    fclose(in);
    fclose(out);
#endif
}