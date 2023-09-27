#include <iostream>
#include <map>
#include <string>
using namespace std;

map <string, int> dic;

string lowerword(string w){
    for (int i=0; i<(int)w.size(); i++)
        w[i] = tolower(w[i]);
    return w;
}

int main(void){

	string w1, w2;
	int l=0, m=0, tmp;

	while (true){
		string s;
		cin>>s;
		if (cin.eof()) break;
		s=lowerword(s);
		dic[s]++;

		tmp = dic[s];
		if (tmp>m){
			m = tmp;
			w1 = s;
		}
		tmp = s.size();
		if (tmp>l){
			l = tmp;
			w2 = s;
		}
	}
	cout<<w1<<" "<<w2<<endl;
	return 0;
}