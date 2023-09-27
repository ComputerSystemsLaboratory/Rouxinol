#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

constexpr int L = 13;
constexpr int M = 244140624 / L;

bool isExist[M][L] = {{false}};

void insert(string in_str);
bool find(string target_str);

int main()
{
    int op_num;
    cin >> op_num;

    string op;
    string word_str;

    while (op_num--) {
        cin >> op >> word_str;
        if (op == "insert") {
            insert(word_str);
        } else if (op == "find") {
            cout << (find(word_str)? "yes": "no") << endl;
        } else {
            cout << "ERROR!" << endl;
        }
    }

    return 0;
}

int char2int(char in);
int str2int(string in_str);

int hashFunc1(int in);
int hashFunc2(int in);

void insert(string in_str)
{
    if (!find(in_str)) {
        int in_int = str2int(in_str);
        int hash1 = hashFunc1(in_int);
        int hash2 = hashFunc2(in_int);
        isExist[hash1][hash2] = true;
    }
}

int char2int(char in)
{
    if (in == 'A') {
        return 1;
    } else if (in == 'C') {
        return 2;
    } else if (in == 'G') {
        return 3;
    } else if (in == 'T') {
        return 4;
    } else {
        cout << "ERROR!" << endl;
        return -1;
    }
}

int str2int(string in_str)
{
    int p = 1;
    int in_int = 0;
    for (auto i = 0; i < in_str.size(); i++) {
        in_int += p * char2int(in_str.at(i));
        p *= 5;
    }

    return in_int;
}

int hashFunc1(int in)
{
    return (in % M);
}

int hashFunc2(int in)
{
    return (in % L);
}

bool find(string target_str)
{
    int target_int = str2int(target_str);
    int hash1 = hashFunc1(target_int);
    int hash2 = hashFunc2(target_int);
    return isExist[hash1][hash2];
}