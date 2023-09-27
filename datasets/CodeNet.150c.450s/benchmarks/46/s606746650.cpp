#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<int>list;
    while (true) {
        int n, x;
        cin >> n >> x;
        if (n == 0 && x == 0) break;
    
        int count = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                for (int k = j + 1; k <= n; k++) {
                    if (i + j + k == x) {
                        count++;
                    }
                }
            }
        }
        
        list.push_back(count);
    }
    
    for (auto count : list) {
        cout << count << endl;
    }

    return 0;
}