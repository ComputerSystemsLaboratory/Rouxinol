#include <iostream>

using namespace std;

class dice{
private:
	int me[6];
public:
	int set();
	int right(int f,int t);
	int show(int k);
};

int dice::set(){
	int i;

	for (i = 0; i < 6; i++)
		cin >> me[i];

	return 0;
}

int dice::right(int f, int t){
	int i,j;
	for (i = 0; i < 6; i++){
		if (me[i] == f)
			break;
	}

	for (j = 0; j < 6; j++){
		if (me[j] == t)
			break;
	}

	switch (i){
	case 0:
		switch (j){
	case 1:return 3;
	case 3:return 4;
	case 4:return 2;
	case 2:return 1;
	}
	case 1:
		switch (j){
		case 0:return 2;
		case 2:return 5;
		case 5:return 3;
		case 3:return 0;
	}
	case 2:
		switch (j){
		case 5:return 1;
		case 1:return 0;
		case 0:return 4;
		case 4:return 5;		
		}
	case 3:
		switch (j){
		case 5:return 4;
		case 4:return 0;
		case 0:return 1;
		case 1:return 5;
		}
	case 4:switch (j){
	case 5:return 2;
	case 2:return 0;
	case 0:return 3;
	case 3:return 5;
	}
	case 5:switch (j){
	case 3:return 1;
	case 1:return 2;
	case 2:return 4;
	case 4:return 3;
	}
	}
	return 0;
}

int dice::show(int k){

	cout << me[k] << endl;
	return 0;
}

int main(){
	int n;
	int i;
	int f, t;
	dice d;
	
	d.set();

	cin >> n;

	for (i = 0; i < n; i++){
		cin >> t >> f;
		d.show(d.right(f, t));
	}


}