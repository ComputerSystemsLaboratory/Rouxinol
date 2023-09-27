#include <iostream>
#include <string>
using namespace std;

const long M = 1046527;
string H[M];

long getKey(string str){
    long sum = 0 , digit = 0 , p = 1;
    for (int i = 0; i < str.size() ; ++i) {
        if (str[i] == 'A') {
            digit = 1;
        } else if (str[i] == 'C') {
            digit = 2;
        } else if (str[i] == 'G') {
            digit = 3;
        } else if (str[i] == 'T') {
            digit = 4;
        } else digit = 0;
        sum += p * digit;
        p *= 5;
    }
    return sum;
}

long hash1(long x) { return x % M ; }
long hash2(long x) { return 1 +  x % (M - 1)   ;}

long insert(string str){
    long x =getKey(str);
    for (int i = 0;  ; i++) {
            long h = (hash1(x) +  i * hash2(x)) % M;
            if (H[h] == str) return 1;
            else if (H[h].size() == 0){
                H[h] = str;
                return 0;
            }
        }
    }



long find(string str){
    long x =getKey(str);
    for (int i = 0;  ; i++) {
        long h = (hash1(x) +  i * hash2(x)) % M;
        if (H[h] == str) return 1;
        else if (H[h].empty()) return 0;
    }
}

int main(){
    string str,com;
    int n;
    cin >> n;
    for (int i = 0; i < n ; ++i) {
        cin >> com >> str;
        if(com == "insert"){
            insert (str);
        } else if (com == "find") {
            if(find (str)){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }
    }
    return 0;
}