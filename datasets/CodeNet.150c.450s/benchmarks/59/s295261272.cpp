#include <iostream>
#include <vector>

using namespace std;


void insertion_sort(vector<int> &as);
void print_vector(const vector<int> &as);

int main(){
    int n;
    cin >> n;
    vector<int> as(n);
    for(auto &a : as) cin >> a;
    insertion_sort(as);
    return 0;
}

void insertion_sort(vector<int> &as){
    print_vector(as);
    for(size_t i = 1; i != as.size(); ++i){
        int key;
        key = as[i];
        int j = i - 1;
        for(; j != -1 && as[j] > key; --j){
            as[j + 1] = as[j];
        }
        as[j + 1] = key;
        print_vector(as);
    }
}

void print_vector(const vector<int> &as){
    size_t i = 0;
    for(auto a : as){
        ++i;
        cout << a;
        if(i!=as.size()) cout << ' ';
    }
    cout << endl;
}