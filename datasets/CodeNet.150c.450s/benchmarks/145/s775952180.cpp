#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct tWord{
	string w;
	int cnt;
};

bool operator<( const tWord& l, const tWord &r ){
	return l.cnt > r.cnt;
}

int main(){
	vector<tWord> words;
	string in, max="";
	while( cin >> in ){
		int i;
		for( i=0; i<words.size(); i++ ){
			if( words[i].w == in ){
				words[i].cnt++;
			}
		}
		if( i == words.size() ){
			tWord w;
			w.w = in; w.cnt = 1;
			words.push_back(w);
			if( max.length() < in.length() ){
				max = in;
			}
		}
	}
	sort( words.begin(), words.end() );
	cout << words[0].w << " " << max << endl;
	return 0;
}