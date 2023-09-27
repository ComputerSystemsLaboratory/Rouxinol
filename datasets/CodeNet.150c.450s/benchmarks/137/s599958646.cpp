#include<iostream>
#include<vector>
#include<string>
using namespace std;
// #define MAX 1000003
class Dictionary{
    const int MAX = 1000003;
    vector<int> D;
    int get_key(char c) {
        if (c == 'A') return 1;
        if (c == 'C') return 2;
        if (c == 'G') return 3;
        return 4;
    }
    int keta(int N) {
        int ret = 1;
        for (int i = 0; i < N; i++) {
            ret *= 5;
        }
        return ret;
    }
    int make_key(string s){
        int key = 0;
        for (int i = 0; i < s.size(); i++) {
            key += get_key(s[i]) * keta(i);
        }
        return key;
    }
    int hash1(int key){
        return key % MAX;
    }
    int hash2(int key){
        return 1 + (key % (MAX - 1));
    }
public:
    Dictionary(){
        D.resize(MAX);
        for (auto& d : D) d = 0;
    }
    void insert(string s){
        int key = make_key(s);
        int h = hash1(key);
        while (D[h]) h = (h + hash2(key)) % MAX;
        D[h] = key;
    }
    bool find(string s){
        int key = make_key(s);
        int h = hash1(key);
        while (D[h]) {
            if (key == D[h]) return true;
            h = (h + hash2(key)) % MAX;
        }
        return false;
    }
};

int main(){
    int n;
    cin >> n;
    Dictionary d;
    for (int i = 0; i < n; i++) {
        string command;
        string content;
        cin >> command >> content;
        if (command == "insert") {
            d.insert(content);
            continue;
        }
        cout << (d.find(content) ? "yes" : "no") << endl;
    }
    return 0;
}