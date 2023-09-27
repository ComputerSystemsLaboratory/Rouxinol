#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> Split(const string& src, char delimiter) {
    vector<string> v;
    stringstream ss(src);
    string buffer;
    while (getline(ss, buffer, delimiter)) {
        v.push_back(buffer);
    }
    return v;
}

template <typename T>
void WriteArray(const vector<T>& v) {
    for (auto iterator = v.begin(); iterator != v.end(); iterator++) {
        cout << *iterator << (iterator + 1 != v.end() ? " " : "");
    }
    cout << endl;
}

template <typename T>
bool IsEqual(const vector<T>& v1, const vector<T>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    int len;
    cin >> len;
    vector<string> str(len);
    for (int i = 0; i < len; i++) cin >> str[i];

    vector<string> strCp1(str);

    strCp1 = str;

    //BubbleSort
    for (int i = 0; i < strCp1.size(); i++) {
        for (int j = strCp1.size() - 1; j > i; j--) {
            if (strCp1[j][1] < strCp1[j - 1][1]) swap(strCp1[j], strCp1[j - 1]);
        }
    }

    WriteArray(strCp1);
    cout << "Stable" << endl;

    vector<string> strCp2(str);
    
    //SelectionSort
    for (int i = 0; i < strCp2.size(); i++) {
        int minj = i;
        for (int j = i; j < strCp2.size(); j++) {
            if (strCp2[j][1] < strCp2[minj][1]) minj = j;
        }
        swap(strCp2[i], strCp2[minj]);
    }

    WriteArray(strCp2);
    cout << (IsEqual(strCp1, strCp2) ? "Stable" : "Not stable") << endl;

    return 0;
}