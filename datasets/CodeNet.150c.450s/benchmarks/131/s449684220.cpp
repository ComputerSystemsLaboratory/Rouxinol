#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0; i<n; i++)

using ll = long long;
template<typename T>
void fill_all(T& arr, const T& v) {
    arr = v;
}
template<typename ARR, typename U>
void fill_all(ARR& arr, const U& v) {
    for(auto& i: arr){fill_all(i, v);}
}

int used[2000000];

int main(){
    
    while(1){
        int a, l;
        cin >> a>>l;
        if(a==0 && l==0){break;}
        fill_all(used, -1);

        size_t i = 0;
        for (; used[a] == -1 ; i++)
        {
            used[a] = i;
            string s = to_string(a);
            while(s.size()<l){
                s = "0"+s;
            }
            std::sort(s.begin(), s.end());
            int mmm = stoi(s);
            std::sort(s.begin(), s.end(), greater<>{});
            int maxmax = stoi(s);
            a = maxmax - mmm;            
        }
        cout << used[a] <<' ' << a << ' ' << i-used[a] << endl;
        
    }
    return 0;
}
