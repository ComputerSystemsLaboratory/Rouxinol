#include<iostream> 
using namespace std; 

int Array[5];
int tmp;

int main() {
	for (int i = 0; i < 5; i++)
	{
		cin >> Array[i];
	}
	
	for (int i = 0; i < 5 - 1; i++){
		for (int g = i+1; g < 5; g++){
			if (Array[i]<Array[g]){
				tmp = Array[i];
				Array[i] = Array[g];
				Array[g] = tmp;
			}
		}
	}

	cout << Array[0] << " " << Array[1] << " " << Array[2] << " " << Array[3] << " " << Array[4] << endl;

	return 0;
}