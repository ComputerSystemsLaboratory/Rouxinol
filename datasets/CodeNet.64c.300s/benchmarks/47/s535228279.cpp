#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

class Mode_Value{
	int mode[100];
	int max;
public:
	Mode_Value();
	void setMode(int);
	void getMaxValue();
};

Mode_Value::Mode_Value(){
	max = 0;
	for(int i = 0; i < 100; i ++)
		mode[i] = 0;
}

void Mode_Value::setMode(int n){
	if(++mode[n - 1] > max)
		max = mode[n - 1];
}

void Mode_Value::getMaxValue(){
	for(int i = 0; i < 100; i ++){
		if(mode[i] == max)
			cout << i + 1 << endl;
	}
}

int main(){
	int a;
	Mode_Value m;
	while(scanf("%d",&a) != EOF)
		m.setMode(a);
	m.getMaxValue();
	return 0;
}