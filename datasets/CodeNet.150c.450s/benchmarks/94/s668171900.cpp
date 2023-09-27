#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <fstream>
#include <stdint.h>
#include <cmath>
#include <algorithm>
#include <utility>
#include <numeric>
using namespace std;

//----------------------------------
//----------------------------------

template<typename container>
inline void print_STL(container c)
{
        if(c.size() == 0)
                return;
        std::cout << c[0]; 
        for(int i = 1; i < c.size(); i++)
                std::cout << ' ' << c[i];
        std::cout << '\n';
}

signed main()
{
    ios::sync_with_stdio(false);
        int n;
        vector<int> a;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
                int tmp;
                cin >> tmp;
                a.push_back(tmp);
        }
        int count = 0;
        for(int i = 0; i < n; ++i)
        {
                for(int j = n-1; j > i; --j)
                        if(a[j] < a[j-1])
                        {
                                count++;
                                swap(a[j],a[j-1]);
                        }
        }
        print_STL(a);
        cout << count << '\n';

}