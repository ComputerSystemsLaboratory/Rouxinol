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
            for (int j = i; j <= n; j++) {
                if (j == i) continue;
    
                for (int k = j; k <= n; k++) {
                    if (k == i) continue;
                    if (k == j) continue;
    
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