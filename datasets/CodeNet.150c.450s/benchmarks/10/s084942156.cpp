#include <iostream>
#include <string>
void printfloor(int b[])
{
	for(int i = 0 ; i < 10 ; i ++){
		std::cout << " " << b[i];
	}
	std::cout << std::endl;
	return;
}
void printdom(int (*bs)[10])
{
	for(int i = 0 ; i < 3 ; i ++){
		printfloor(bs[i]);
	}
	return;
}
void printall(int (*data)[3][10])
{
	std::string delim(20,'#');
	for(int i = 0; i < 4 ; i ++){
		printdom(data[i]);
		if(i < 3) std::cout << delim << std::endl;
	}
//	std::cout << std::endl;
	return;
}
int main(int argc, char const *argv[])
{
	int (*data)[3][10] = new int[4][3][10];
	//initialize
	for(int i = 0 ; i < 4 ; i ++){
		for(int j = 0 ; j < 3 ; j ++){
			for(int k = 0 ; k < 10 ; k ++){
				data[i][j][k] = 0;
			}
		}
	}

	int n ;//number of information
	std::cin >> n;
	for(int i = 0 ; i < n ; i ++){
		int b,f,r,v;
		std::cin >> b >> f >> r >> v;
		data[b-1][f-1][r-1] += v;
	}
	printall(data);
	delete[] data;
	return 0;
}