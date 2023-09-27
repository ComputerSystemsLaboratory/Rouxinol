#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(void){
    int a,l;
	while(cin >> a >> l,a+l!=0){
        string s = to_string(a);
        int used[1000001];
        memset(used,-1,sizeof(used));
        int i = 0;
        used[a] = 0;
        while(true){
            i++;
            for(;s.size()<l;s += '0'){}
            sort(s.begin(),s.end());
            string t = s;
            reverse(t.begin(),t.end());
            
           // cout << s << " " << t << endl;
            int n = stoi(t) - stoi(s);
           // cout << n << endl;
            s = to_string(n);

            if(used[n] != -1){
                cout << used[n] << " " << n << " " << i-used[n] << endl;
                break;
            }
            used[n] = i;
        }
    }
	return 0;
}