#include<cmath>
#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cctype>
using namespace std;



int main() {
	char s;
	while (1) {
		scanf("%c", &s);
		if (s == '\n')break;



		if (islower(s))s = toupper(s);
		else if (isupper(s))s = tolower(s);
		printf("%c",s);
		

		
	}
	cout << endl;

	return 0;
}




/*


#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	for (char c; (c = getchar()) != '\n';) {
		if (islower(c))
			cout << (char)toupper(c);
		else if (isupper(c))
			cout << (char)tolower(c);
		else
			cout << c;
	}
	cout << endl;
	return 0;
}





#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	string s; getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (islower(s[i]))
			cout << (char)toupper(s[i]);
		else if (isupper(s[i]))
			cout << (char)tolower(s[i]);
		else
			cout << s[i];
	}
	cout << endl;
	return 0;
}
*/