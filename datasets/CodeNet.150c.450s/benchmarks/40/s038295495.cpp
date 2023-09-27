#include <iostream>

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
private:
	int v[6];
};

int main(){
	int in[6];
	std::string s;
	for(int i=0;i<6;i++){
		std::cin >> in[i];
	}
	dice d(in);
	std::cin >> s;
	for(auto it=s.begin();it!=s.end();it++){
		d.mov(*it);
	}
	std::cout << d.top() << std::endl;
}