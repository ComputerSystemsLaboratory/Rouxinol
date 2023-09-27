#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i) 
#define PI acos(-1)

using namespace std;
using ll = long long;
using P = pair<int, int>;

struct Node {
    int key = INT_MAX;
    Node* left = NULL;
    Node* right = NULL;
    Node() {}
    Node(int key) : key(key) {}
    void preprint() {
        cout<<" "<<this->key;
        if (left != NULL) {
            left->preprint();
        }
        if (right != NULL) {
            right->preprint();
        }
    }
    void inprint() {
        if (left != NULL) {
            left->inprint();
        }
        cout<<" "<<this->key;
        if (right != NULL) {
            right->inprint();
        }
    }
    void insert(int key) {
        if (key < this->key) {
            if (left == NULL) left = new Node(key);
            else left->insert(key);
        }
        else {
            if (right == NULL) right = new Node(key);
            else right->insert(key);
        }
    }
    bool find(int key) {
        if (key == this->key) return true;
        if (key < this->key) {
            if (left == NULL) return false;
            return left->find(key);
        }
        if (right == NULL) return false;
        return right->find(key);
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    Node root = Node();
    rep(i, n) {
        string ins;
        cin>>ins;
        if (ins == "print") {
            root.inprint();
            cout<<endl;
            root.preprint();
            cout<<endl;
            continue;
        }

        int key;
        cin>>key;
        if (ins == "find") {
            bool f = root.find(key);
            if (f) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
            continue;
        }
        
        if (root.key == INT_MAX) {
            root.key = key;
            continue;
        }
        root.insert(key);
    }
}
