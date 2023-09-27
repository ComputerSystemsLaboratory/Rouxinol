#include <iostream>
#include <random>
#include <functional>
#include <ctime>
using std::cout;
using std::endl;
using std::cin;

class dice{
public:
	explicit dice(int in[6]){
		for(int i=0;i<6;i++){
			v[i]=in[i];
		}
	}
	void mov(const char c){
		int buf;
		switch(c){
			case 'N':{
				buf = v[0];
				v[0] = v[1];
				v[1] = v[5];
				v[5] = v[4];
				v[4] = buf;
				break;
			}
			case 'E':{
				buf = v[0];
				v[0] = v[3];
				v[3] = v[5];
				v[5] = v[2];
				v[2] = buf;
				break;
			}
			case 'W':{
				buf = v[0];
				v[0] = v[2];
				v[2] = v[5];
				v[5] = v[3];
				v[3] = buf;
				break;
			}
			case 'S':{
				buf = v[0];
				v[0] = v[4];
				v[4] = v[5];
				v[5] = v[1];
				v[1] = buf;
				break;
			}
		}
	}
	int top(){
		return v[0];
	}
	int operator[](size_t i){return v[i];}
private:
	int v[6];
};

int p_r(dice d,int up,int front){
	auto rgen = std::bind(std::uniform_int_distribution<>(0,3),std::mt19937(time(NULL)));
	char dir[]={'N','E','W','S'};
	while(up!=d[0]||front!=d[1]){
		d.mov(dir[rgen()]);
	}
	return d[2];
}

int main(){
	int in[6],n,p_u,p_f;
	for(int i=0;i<6;i++){
		cin >> in[i];
	}
	dice d(in);
	cin >> n;
	while(n--){
		cin >> p_u;
		cin >> p_f;
		cout << p_r(d,p_u,p_f) << endl;
	}
}