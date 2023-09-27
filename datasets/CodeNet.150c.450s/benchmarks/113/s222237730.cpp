#include <iostream>
#include <vector>
using namespace std;

int main(){
    int data, count = 0;
    vector<int> data_vector;
    while(1){
        cin >> data;
        if (data == 0) break;
        data_vector.push_back(data);
        count++;
    }
    for (int i = 0; i < count; i++){
        cout << "Case " << i+1 << ": " << data_vector[i] << endl;
    }
}

