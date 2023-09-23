#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int d, tmp, i;
	
	while(cin >> d){
		tmp = 0;
		i = 1;
		while((i*d)!=(600)){
			tmp += (d*i*i*d*d);
			i++;
		}
		cout << tmp << endl;
	}
	
	return 0;
}