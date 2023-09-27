#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void insert(vector<int> &v, int element);

int extract(vector<int> &v);

void disp(vector<int> &v);

void insert(vector<int> &v, int element) {
    v.push_back(element);
    int current_index = v.size() - 1;
    int parent_index = -1;
    if (v.size()==1) {
    } else {
        parent_index = (current_index - 1) / 2;
        while ((v[parent_index] < v[current_index])&&(current_index != 0)) {
            swap(v[parent_index], v[current_index]);
            current_index = parent_index;
            parent_index = (current_index - 1) / 2;
        }
    }
}

int extract(vector<int> &v) {
    int root = v[0];
    int tail = v[v.size()-1];
    int left, left_index, right, right_index;
    v[0] = tail;
    v.pop_back();

    int current_index = 0;
    while (1) {
        left_index = 2 * current_index + 1;
        right_index = 2 * current_index + 2;
        left = left_index < v.size() ? v[left_index] : -1;
        right = right_index < v.size() ? v[right_index] : -1;
        if ((left > v[current_index])&&(left > right)) {
            swap(v[current_index], v[left_index]);
            current_index = left_index;
        } else if (right > v[current_index]) {
            swap(v[current_index], v[right_index]);
            current_index = right_index;
        } else {
            break;
        }
    }
    return root;
}


void disp(vector<int> &v) {
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    string operation;
    int element;
    vector<int> v;
    while ((cin >> operation)&&(operation!="end")) {
        if (operation == "insert") {
            cin >> element;
            insert(v, element);
        } else if (operation == "extract") {
            element = extract(v);
            cout << element << endl;
        }
    }
}