#include<iostream>
#include<vector>

typedef std::vector<int> VceInt;

VceInt input();
int match(VceInt S,VceInt T);
int output(int count);

int main()
{
	VceInt S = input();
	VceInt T = input();
	int count = match(S, T);
	output(count);
	return 0;
}

VceInt input()
{
	int n = 0;
	std::cin >> n;
//	std::cout << n << std::endl;
	VceInt S;
	S.resize(n);
	for(int i = 0; i < n; i++){
		std::cin >> S[i];
	}
	return S;
}

int match(VceInt S, VceInt T)
{
	int count = 0;
	for(int j = 0; j < T.size(); j++){
		for(int i = 0; i < S.size(); i++){
			if( T[j] == S[i] ){
				count++;
				break;
			}
		}
	}
	return count;
}

int output(int count)
{
	std::cout << count << std::endl;
	return 0;
}