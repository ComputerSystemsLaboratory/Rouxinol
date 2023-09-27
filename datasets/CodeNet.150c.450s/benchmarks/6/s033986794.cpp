#include<iostream>

void returnNo()
{
	std::cout << "No\n";
}
	
int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if(a<b){
		if(b<c){
			std::cout << "Yes\n";
		} else {
			returnNo();
		}
	} else {
		returnNo();
	}
	return 0;
}