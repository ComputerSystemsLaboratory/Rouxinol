#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

typedef pair<char, int> card;

bool ShowTwiceOrMore(vector<card>& v) {
    vector<int> counter = vector<int>(v.size() + 1, 0);
    for (int i = 0; i < v.size(); ++i) {
        if (++counter[v[i].second] >= 2) {
            return true;
        }
    }
    return false;
}

vector<string> GetMultString(vector<card>& v) {
    vector<string> result = vector<string>(10, "");
    for (int i = 0; i < v.size(); ++i) {
        result[v[i].second] += v[i].first;
    }

    return result;
}

bool isStable(vector<card>& origin, vector<card>& handled) {
//    if (!ShowTwiceOrMore(origin)) {return true;}
    if (GetMultString(origin) == GetMultString(handled)) {
        return true;
    } else {
        return false;
    }
}

void PrintCard(card& c) {
    cout << c.first << c.second;
}

void PrintVector(vector<card>& v) {
    for (int i = 0; i < v.size(); ++i) {
        PrintCard(v[i]);
        if (i + 1 != v.size()) {
            cout << " ";
        } else {
            cout << endl;
        }
    }
}

void Swap(int& a, int& b) {
    if (a != b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
}

void Swap(card& a, card& b) {
    card tmp = b;
    b = a;
    a = tmp;
}

vector<card> BubbleSort(vector<card> v) {
    for (int i = 0; i < v.size(); ++i) {
        for (int j = v.size() - 1; j > i; --j) {
            if (v[j].second < v[j - 1].second) {
                Swap(v[j], v[j - 1]);
            }
        }
    }

    return v;
}

vector<card> SelectionSort(vector<card> v) {
    int mini;
    for (int i = 0; i < v.size(); ++i) {
        mini = i;
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[j].second < v[mini].second)
                mini = j;
        }
        Swap(v[mini], v[i]);
    }

    return v;
}

int main() {
//    freopen("E:/in.txt", "r", stdin);

    int N;
    int tmpI;
    char tmpC;
    card tmp;
    vector<card> v,v1,v2;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> tmpC >> tmpI;
        tmp = make_pair(tmpC, tmpI);
        v.push_back(tmp);
    }

    v1 = BubbleSort(v);
    PrintVector(v1);
    if (isStable(v, v1)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    v2 = SelectionSort(v);
    PrintVector(v2);
    if (isStable(v, v2)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
}

