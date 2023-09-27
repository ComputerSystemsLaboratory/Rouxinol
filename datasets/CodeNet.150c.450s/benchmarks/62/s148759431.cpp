#include <iostream>
#include <vector>

using namespace std;

void Sort(vector<int>& List);
void Output(vector<int>& List);

void Sort(vector<int>& List)
{
	for(int i = 1; i < List.size(); i++){
		int Temp = List[i];
		int j = i - 1;
		while(j >= 0 && List[j] > Temp){
			List[j + 1] = List[j];
			j--;
		}
		List[j + 1] = Temp;
	}
}

void Output(vector<int>& List)
{
	for(int i = 0; i < List.size(); i++){
		if(i > 0)	cout << " ";
		cout << List[i];
	}
	cout << endl;
}

int main()
{
	vector<int> List;
	
	List.clear();
	for(int i = 0; i < 3; i++){
		int Value;
		cin >> Value;
		List.push_back(Value);
	}
	
	Sort(List);
	Output(List);
}