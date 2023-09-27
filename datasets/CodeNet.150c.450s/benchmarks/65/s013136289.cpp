#include <iostream>
using namespace std;

const int MAX=36;

int N;
pair<char, int> arr_bubble[MAX];
pair<char, int> arr_selection[MAX];

void bubble_sort();
void selection_sort();

int main(){
	
	char type;
	int number;
	
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> type;
		cin >> number;
		
		arr_bubble[i].first = type;
		arr_bubble[i].second = number;
		
		arr_selection[i].first = type;
		arr_selection[i].second = number;
	}
	
	bubble_sort();
	selection_sort();
	
	for(int i=0; i<N; i++){
		if(i==0){
			cout << arr_bubble[i].first << arr_bubble[i].second;
		}
		else{
			cout << " " << arr_bubble[i].first << arr_bubble[i].second;
		}
	}
	cout << endl;
	
	cout << "Stable" << endl;
	
	bool is_stable = true;
	for(int i=0; i<N; i++){
		if(arr_selection[i].first != arr_bubble[i].first) {
			is_stable = false;
			break;
		}
	}
	
	
	for(int i=0; i<N; i++){
		if(i==0){
			cout << arr_selection[i].first << arr_selection[i].second;
		}
		else{
			cout << " " << arr_selection[i].first << arr_selection[i].second;
		}
	}
	cout << endl;
	
	if(is_stable){
		cout << "Stable" << endl;
	}
	else{
		cout << "Not stable" << endl;
	}
}

void bubble_sort(){
		for(int i=0; i<N; i++){
			for(int j=N-1; j>i; j--){
				if(arr_bubble[j-1].second > arr_bubble[j].second){
					pair<char, int> tmp;
					tmp = arr_bubble[j];
					arr_bubble[j] = arr_bubble[j-1];
					arr_bubble[j-1] = tmp;
				}
			}
		}
	}
	
void selection_sort(){
		for(int i=0; i<N; i++){
			int mini = i;
			for(int j=i; j<N; j++){
				if(arr_selection[mini].second > arr_selection[j].second){
					mini = j;
				}
			}
			pair<char, int> tmp;
			tmp = arr_selection[i];
			arr_selection[i] = arr_selection[mini];
			arr_selection[mini] = tmp;
		}
	}
	