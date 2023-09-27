#include <bits/stdc++.h>

using namespace std;

//#define WAIT cout << flush,system("pause");
#define TRUE 1
#define FALSE 0

typedef pair<int, int> ii;
typedef vector<int> vi; 
typedef long long ll;
typedef vector< ii > vii; 
typedef pair<int , pair<int , int> > tri;

#define F first
#define S second


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string s,ans;
	getline(cin,s);
	
	for(int i = 0; i < s.length(); ++i){
		
		if(s[i] >= 'a' && s[i] <= 'z')
			ans.push_back(toupper(s[i]));
			
		else if(s[i] >= 'A' && s[i] <= 'Z')
			ans.push_back(tolower(s[i]));
		
		else
			ans.push_back(s[i]);
	}
	
	cout << ans << '\n';
	
	//WAIT
}







