#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
 
string rev(string ss){
    reverse(ss.begin(),ss.end());
    return ss;
}
 
int main(){
    int n;
    cin >> n;
    while(n--){
	string str;
	set<string> s;
	cin >> str;
 
	for(int i = 1 ; i < str.size() ; i++){
	    string l = str.substr(0,i),r = str.substr(i);
	    s.insert(l+r);
	    s.insert(rev(l)+r);
	    s.insert(l+rev(r));
	    s.insert(rev(l)+rev(r));
	    s.insert(r+l);
	    s.insert(rev(r)+l);
	    s.insert(r+rev(l));
	    s.insert(rev(r)+rev(l));
	}
	cout << s.size() << endl;
    }
    return 0;
}