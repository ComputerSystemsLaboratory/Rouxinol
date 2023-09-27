/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1142&lang=jp*/
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int m;

    cin>>m;
    for (int i = 0; i < m; ++i) {
        string str;
        set<string> strings;

        cin>> str;
        for (unsigned int j = 1; j < str.length(); ++j) {
            string s1= str.substr(0,j);
            string s2= str.substr(j);

            for (int k = 0; k < 2; ++k) {
                for (int l = 0; l < 2; ++l) {
                    string s1tmp = s1;
                    string s2tmp = s2;

                    if(k==1){
                        reverse(begin(s1tmp),end(s1tmp));
                    }
                    if(l==1){
                        reverse(begin(s2tmp),end(s2tmp));
                    }
                    strings.insert(s1tmp+s2tmp);
                    strings.insert(s2tmp+s1tmp);
                }
            }
        }
        cout<<strings.size()<<endl;
    }
    return 0;
}