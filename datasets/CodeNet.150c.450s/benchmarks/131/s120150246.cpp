#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

inline int toInt(std::string s) {int v; std::istringstream sin(s);sin>>v;return v;}
template<class T> inline std::string toString(T x) {std::ostringstream sout;sout<<x;return sout.str();}

int main(int argc, char const *argv[])
{
	int a,L;
	int max,min;
	string s;
	vector<int>::iterator it;
	int i,j;

	while(1){
		cin>>a>>L;
		if(a+L==0) break;

		vector<int> v;
		v.push_back(a);

		while(1){

			s=toString<int>(a);

			while(s.size()<L){
				s+="0";
			}
			
			sort(s.begin(), s.end());
			min=toInt(s);
			//sort(s.begin(), s.end(),greater<int>());
			reverse(s.begin(), s.end());
			max=toInt(s);
			
			a=max-min;
			it=find(v.begin(), v.end(),a);
			if(it!=v.end()) break;

			v.push_back(a);

		}
		j=distance(v.begin(),it);
		cout<<j<<" "<<a<<" "<<v.size()-j<<endl;


	}

	return 0;
}