#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin>>a.at(i);
    }
    reverse(a.begin(),a.end());
 cout<<a.at(0);
 for(int i=1;i<n;++i){
 cout<<" "<<a.at(i);
     
 }
 cout<<endl;
}

// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/

