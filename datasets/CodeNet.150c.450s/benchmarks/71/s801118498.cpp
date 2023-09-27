

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
#include <map>
#define INF 100000
using namespace std;
typedef long long int ll;

int main(){
    int n;
    while (cin >> n) {
        int ans=0;
        for (int i=0; i<=9; i++) {
            for (int j=0; j<=9; j++) {
                for (int k=0; k<=9; k++) {
                    for (int l=0; l<=9; l++) {
                        if(i+j+k+l==n) ans++;
                    }
                }
            }
        }
        cout << ans <<endl;
    }
}