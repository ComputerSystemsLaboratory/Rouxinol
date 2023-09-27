#include<vector>
#include<iostream>
using namespace std;
template <class data_t>
class dice{
public:
	vector<data_t> field;
	dice(vector<data_t> v);
	void roll(char ch);
	data_t top(){return field[0];}
};
template <class data_t>
dice<data_t>::dice(vector<data_t> v){
	typename vector<data_t>::iterator vi = v.begin();
	while(vi!=v.end()){
		field.push_back(*vi);
		vi++;
	}
}
template <class data_t>
void dice<data_t>::roll(char ch){
	data_t tmp;
	switch(ch){
		case 'E':
			tmp = field[0];
			field[0] = field[3];
			field[3] = field[5];
			field[5] = field[2];
			field[2] = tmp;
			break;
		case 'N':
			tmp = field[0];
			field[0] = field[1];
			field[1] = field[5];
			field[5] = field[4];
			field[4] = tmp;
			break;
		case 'S':
			tmp = field[0];
			field[0] = field[4];
			field[4] = field[5];
			field[5] = field[1];
			field[1] = tmp;
			break;
		case 'W':
			tmp = field[0];
			field[0] = field[2];
			field[2] = field[5];
			field[5] = field[3];
			field[3] = tmp;
			break;
	}
	return;
}

int main(){
	vector<int> v(6);
	string str;
	string::iterator si;
	cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4]>> v[5];
	cin >> str;
	dice<int> d(v);
	si = str.begin();
	while(si != str.end()){
		d.roll(*si);
		si++;
	}
	cout << d.top() << endl;
	return 0;
}