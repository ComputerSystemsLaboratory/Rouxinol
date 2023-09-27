#include <iostream>
#include <vector>
using namespace std;

bool checkP(int K, vector<unsigned int> &weight, unsigned int p) {
    int track = 1;
    int track_w = 0;
    
    for(int i=0; i<weight.size(); i++) {
        if (track > K) {
            return false;
        }
        if (track_w + weight[i] > p) {
            track++;
            track_w = 0;
            i--;
            continue;
        }
        track_w += weight[i];
    }

    return (track <= K);
}

unsigned int getP(int K, vector<unsigned int> &weight, unsigned int min_p, unsigned int max_p) {
    if (max_p - min_p == 1) {
        return max_p;
    }
    unsigned int p = (min_p + max_p) / 2;
    
    if(checkP(K, weight, p)) {
        return getP(K, weight, min_p, p);
    }else {
        return getP(K, weight, p, max_p);
    }
}

int main(void){
    int N, K;
    cin >> N >> K;

    vector<unsigned int> weight = vector<unsigned int>(N, 0);
    unsigned int maxWeight = 0;
    for (int i=0; i<N; i++) {
        cin >> weight[i];
        if(weight[i] > maxWeight) {
            maxWeight = weight[i];  
        }
    }

    unsigned int min_p = 0;
    unsigned int max_p = maxWeight*N/K + 1;
    
    cout << getP(K, weight, min_p, max_p) << endl;
}

