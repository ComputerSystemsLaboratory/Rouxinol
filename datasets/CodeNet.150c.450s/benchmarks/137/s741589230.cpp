#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct Node {
    string str;
    Node *next;
    Node(const string& str, Node *next) : str(str), next(next) { }
};

const int DICT_SIZE = 1000001;
Node* dict[DICT_SIZE];

inline int tohash(const string& str) {
    int result = 0;
    for (int i = 0; i < str.size(); ++i) {
        result = result * 31 + (str[i]);
        result %= DICT_SIZE;
    }
    return result;
}

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    char command[7];
    string str;
    for (int i = 0; i < n; ++i) {
        cin >> command >> str;
        int hashval = tohash(str);
//        cout << "[hashval] str = " << str 
//             << ", hashval = " << hashval << "\n";
        if (command[0] == 'i') {
            if (dict[hashval]) {
                Node *node = dict[hashval];
                while (node->next) {
                    node = node->next;
                }
                node->next = new Node ( str, NULL );
            }
            else {
                dict[hashval] = new Node ( str, NULL );
            }
        }
        else {
            bool exist = false;
            for (Node *node = dict[hashval]; node != NULL;
                    node = node->next) {
                if (node->str == str) {
                    exist = true;
                    break;
                }
            }
            cout << (exist ? "yes" : "no") << '\n';
        }
    }

    return 0;
}