#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;
typedef uint32_t it;

int main()
{
        it n, w;
        cin >> n >> w;
        vector<it> vi(n+1), wi(n+1);
        vector<it> table(w+1, 0);

        for(it i = 1; i <= n; ++i){
                scanf("%u %u", &vi[i], &wi[i]);
        }

        for(it i = 1; i <= n; ++i){
//#pragma omp parallel for
                for(it j = w-wi[i]; j >= 1; --j){
                        if(table[j] == 0)
                                continue;
                        if(table[j] + vi[i] > table[j + wi[i]])
                                table[j + wi[i]] = table[j] + vi[i];
                }
                if(table[wi[i]] < vi[i])
                        table[wi[i]] = vi[i];
        }

        cout << *max_element(begin(table), end(table)) << endl;

        return 0;
}