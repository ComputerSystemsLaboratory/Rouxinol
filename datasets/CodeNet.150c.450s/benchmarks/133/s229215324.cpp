#include <bits/stdc++.h>
using namespace std;

#define TYPE 26

int main() {

	int64_t d;
	cin >> d;

    vector<int64_t> c(TYPE);
    for(int i=0;i<TYPE;i++){
        cin>>c.at(i);
    }

    vector<vector<int64_t>> s(d, vector<int64_t>(TYPE));
    for(int i=0;i<d;i++){
        for(int j=0;j<TYPE;j++){
            cin>>s.at(i).at(j);
        }
    }

    vector<int64_t> last(TYPE,0);
    int64_t satisfaction=0;
    for(int i=0;i<d;i++){
        int64_t t;
        cin>>t;

        satisfaction+=s.at(i).at(t-1);
        last.at(t-1)=i+1;

        int64_t degrade=0;
        for(int j=0;j<TYPE;j++){
            degrade+=c.at(j)*(i+1-last.at(j));
        }
        satisfaction-=degrade;

        cout<<satisfaction<<endl;
    }

	return 0;
}