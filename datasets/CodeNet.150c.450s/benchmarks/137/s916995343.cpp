#include <iostream>
#include <vector>

using namespace std;

#define M 1046527

class Hash{
    vector<string> h;

    int getChar(char ch){
        if ( ch == 'A') return 1;
        else if ( ch == 'C') return 2;
        else if ( ch == 'G') return 3;
        else if ( ch == 'T') return 4;
    }

/* convert a string into an integer value */
    long long getKey(string str){
        long long sum = 0, p = 1, i;
        for ( i = 0; i < str.size(); i++ ){
            sum += p*(getChar(str[i]));
            p *= 5;
        }
        return sum;
    }

    int h1(int key){ return key % M; }
    int h2(int key){ return 1 + (key % (M - 1)); }


public:
    Hash() : h(M) {}

    void insert(string str){
        long long i,key;
        i = getKey(str);
        for (int j = 0;; j++) {
            key = (h1(i) + j * h2(i)) % M;
            if (h[key] == str) {
                return;
            } else if (h[key].empty()){
                h[key] = str;
                return;
            }
        }
    }
    bool find(string str){
        long long i,key;
        i = getKey(str);
        for (int j = 0;; j++) {
            key = (h1(i) + j * h2(i)) % M;
            if (h[key] == str) {
                return true;
            } else if (h[key].empty()){
                return false;
            }
        }
    }
};

int main(){
    //freopen("in", "r", stdin);

    Hash h;

    vector<int> data(19);

    int n;
    cin >> n;
    for (int j = 0; j < n; ++j) {
        string s;
        string k;
        cin >> s >> k;
        if (s == "insert"){
            h.insert(k);
        } else {
            string result = h.find(k) ? "yes" : "no";
            cout << result << endl;
        }
    }
    return 0;
}