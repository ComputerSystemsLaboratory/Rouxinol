#include <iostream>
#include <vector>
#include <algorithm>

#define r(i, n) for (int i = 0; i < n; i++)

using namespace std;

// data
int n, k;
vector<int> wsum;

bool validCap(int P);
int main(){
    // input 
    cin >> n >> k;
    int sum = 0, wi;
    r(i, n){
        cin  >> wi;
        sum += wi;
        wsum.push_back(sum);
    }

    // binary search
    int Pl = 0, Pr = wsum[wsum.size()-1];
    while(true){
        int P = (Pl+Pr)/2;
        if(validCap(P)){
            Pr = P; 
        }else{
            Pl = P;
        }

        if(Pr-Pl <= 1){
            break;
        }
    }

    cout << Pr << endl;
}

bool validCap(int P){
    int maxW = 0;
    r(i, k){
        vector<int>::iterator pos = upper_bound(wsum.begin(), wsum.end(), maxW+P)-1;
        maxW = *pos;
        if(maxW >= wsum[wsum.size()-1])
            return true;
    }
    return false;
}
