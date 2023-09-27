#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace {
    template<typename T>
    void print_vector(vector<T> &v) {
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it;
            if (it + 1 != v.end())
                cout << " ";
        }
        cout << endl;
    }

     double calculate_area(vector<char>& stack) {
         double area = 0;
         int depth = 0;
         while(!stack.empty()) {
             const char c = stack.back();
             stack.pop_back();
             switch(c) {
                 case '\\':
                     if (depth > 0) {
                         area += 0.5 + depth - 1;
                         depth -= 1;

                         if (depth == 0)
                             return area;
                     }
                     break;
                 case '/':
                     area += 0.5 + depth;
                     depth += 1;
                     break;
                 case '_':
                     if (depth > 0)
                         area += depth;

                     break;
                 default:
                     break;
             }
         }
         return -1;
     }

     vector<double> calculate_areas(vector<char>& stack) {
         vector<double> ret;
         while(double area = calculate_area(stack)) {
             if (area == -1)
                 break;

             ret.push_back(area);
         }
         reverse(ret.begin(), ret.end());
         return ret;
     }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed;
    cout.precision(0);

    string line;
    getline(cin, line);

    vector<double> pools;
    int depth = 0;

    vector<char> stack;
    stack.reserve(20000);

    for(const char& c : line) {
        switch(c) {
            case '\\':
                stack.push_back('\\');
                depth += 1;
                break;
            case '/':
                stack.push_back('/');
                if (depth > 0) {
                    depth -= 1;
                    if (depth == 0) {
                        pools.push_back(calculate_area(stack));
                        stack.clear();
                    }
                }
                break;
            case '_':
                stack.push_back('_');
                break;
            default:
                break;
        }
    }

    if (depth > 0) {
        for (const auto& v: calculate_areas(stack)) {
            pools.push_back(v);
        }
    }

    double total = 0;
    for(const auto& p : pools) { total += p; };

    cout << total << endl;
    cout << pools.size();
    if (pools.size() > 0) {
        cout << " ";
        print_vector(pools);
    } else {
        cout << endl;
    }
    return 0;
}