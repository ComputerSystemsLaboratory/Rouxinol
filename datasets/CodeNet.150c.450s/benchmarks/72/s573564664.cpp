#include<iostream>
#include<string>
using namespace std;

int main(){
	string Imput;
	getline(cin, Imput);
	string Output = Imput;

	for(int i = 0; i < Imput.size(); i++){
	   if('a' <= Imput[i] && Imput[i] <= 'z') Output[i] += 'A' - 'a';
	   if('A' <= Imput[i] && Imput[i] <= 'Z') Output[i] += 'a' - 'A';
	}

	cout << Output << endl;
//	system("pause");
	return 0;
}