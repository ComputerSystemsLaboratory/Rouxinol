#include <iostream>

using namespace std;

bool less_than(const string a, const string b) {
    return a[1] < b[1];
}

void bubble_sort(string* a, int length) {
    for (int i = 0; i < length; ++i) {
        for (int j = length - 1; j > i; --j) {
            if (less_than(a[j], a[j - 1])) {
                swap(a[j], a[j - 1]);
            }   
        }   
    }   
}

void select_sort(string* a, int length) {
    for (int i = 0; i < length; ++i) {
        int min = i;
        for (int j = i; j < length; ++j) {
            if (less_than(a[j], a[min])) {
                min = j;
            }   
        }   
        swap(a[i], a[min]);
    }   
}

void print(string* a, int length) {
    bool is_first = true;
    for (int i = 0; i < length; ++i) {
        if (is_first) {
            is_first = false;
        } else {
            cout << " ";
        }   
        cout << a[i];
    }   
    cout << endl;
}

bool stable(string* a, string* b, int length) {
    for (int i = 0; i < length; ++i) {
        if (a[i].compare(b[i]) != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int length;
    cin >> length;
    std::string* data = new std::string[length];
    std::string* data_copy = new std::string[length];
    for (int i = 0; i < length; ++i) {
        cin >> data[i];
        data_copy[i] = data[i];
    }
    bubble_sort(data, length);
    select_sort(data_copy, length);

    print(data, length);
    cout << "Stable" << endl;

    print(data_copy, length);
    cout << (stable(data, data_copy, length)? "Stable" : "Not stable") << endl;

    return 0;
}                                                                                                                                             