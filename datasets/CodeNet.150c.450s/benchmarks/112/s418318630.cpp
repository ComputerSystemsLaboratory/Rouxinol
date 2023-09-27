#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	char to,from,*str;
	map<char,char> hyou;

	str = new char [10000001];

	while(cin >> n && n ){
		for(int i = 0; i < n; i++){
			cin >> to;
			cin >> from;
			hyou.insert( make_pair(to,from) );
		}

		cin >> n;

		for(int i = 0; i < n; i++){
			cin >> str[i];
			if(hyou.find(str[i]) != hyou.end()){
				str[i] = hyou[str[i]];
			}
		}
		str[n] = '\0';

		printf("%s\n",str);

		hyou.erase(hyou.begin(),hyou.end());
	}

	return 0;
}