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
	typename vector<data_t>::iterator vi = v.begin();//vector<datat>::iterator???????????§??????????????§???????????¨???????????????
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
template <class data_t>
void spin(dice<data_t> &d){
	data_t tmp;
	tmp = d.field[1];
	d.field[1] = d.field[3];
	d.field[3] = d.field[4];
	d.field[4] = d.field[2];
	d.field[2] = tmp;
	return;
}
int main(){
	vector<int> v(6);
	int q_num, num1, num2, i;
	cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4]>> v[5];
	dice<int> d(v);
	cin >> q_num;
	while(q_num--){
		cin >> num1 >> num2;
		if(d.field[0] != num1){
			for(i=0;i<3;i++){
				d.roll('N');
				if(d.field[0] == num1)
					break;
			}
			if(d.field[0] != num1){
				for(i=0;i<3;i++){
					d.roll('E');
					if(d.field[0] == num1)
						break;
				}
			}
		}
		if(d.field[1] != num2){
			while(true){
				spin(d);
				if(d.field[1] == num2){
					break;
				}
			}
		}
		cout << d.field[2] << endl;
	}
	return 0;
}