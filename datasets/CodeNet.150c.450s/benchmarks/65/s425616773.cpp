#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Card {
public:
    uint8_t suit;
    int32_t num;

    Card() {
        suit = 'S';
        num = 1;
    }

    Card(string str) {
        suit = str[0];
        num = str[1] - 48;
    }
};

bool operator< (const Card &c1, const Card &c2) {
    return c1.num < c2.num;
} ;

ostream& operator<< (ostream& os, const Card& c) {
    os << c.suit << c.num;
    return os;
}

template<typename T>
vector<T> bubble_sort(vector<T> v) {
    for (uint32_t i = 0; i < v.size(); i++) {
        for (uint32_t j = v.size() - 1; j > i; j--) {
            if (v[j] < v[j - 1]) {
                swap(v[j], v[j - 1]);
            }
        }
    }

    return v;
}

template<typename T>
vector<T> insertion_sort(vector<T> v) {
    for (uint32_t i = 0; i < v.size(); i++) {
        uint32_t mini = i;
        for (uint32_t j = i; j < v.size(); j++) {
            if (v[j] < v[mini]) {
                mini = j;
            }
        }

        if (i != mini) {
            swap(v[i], v[mini]);
        }
    }

    return v;
}

template<typename T>
void print(vector<T> v) {
    for (uint32_t i = 0; i < v.size() - 1; i++) {
        cout << v[i] << " ";
    }
    cout << v[v.size() - 1] << endl;
}

bool is_stable(vector<Card> v1, vector<Card> v2) {
    for (int32_t i = 1; i <= 9; i++) {
        uint32_t j = 0, k = 0;
        while (1) {
            while (v1[j].num != i && j < v1.size()) j++;
            while (v2[k].num != i && k < v2.size()) k++;
            if (j >= v1.size() || k >= v2.size()) break;
            if (v1[j].suit != v2[k].suit) return false;
            j++;
            k++;
        }
    }

    return true;
}

int main() {
    int32_t N;

    cin >> N;

    vector<Card> A(N);

    for (int32_t i = 0; i < N; i++) {
        string temp;
        cin >> temp;
        A[i] = Card(temp);
    }

    vector<Card> B = bubble_sort(A);
    print(B);
    cout << (is_stable(A, B) ? "Stable" : "Not stable") << endl;

    vector<Card> C = insertion_sort(A);
    print(C);
    cout << (is_stable(A, C) ? "Stable" : "Not stable") << endl;

    return 0;
}