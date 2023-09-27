#include <cstdio>
#include <vector>
#define MAX 10
using namespace std;

vector<int> sort(vector<int> &array);

int main(){
	vector<int> array;
	int n;
	
	for(int i = 0; i < MAX; i++){
		scanf("%d", &n);
		array.push_back(n);
	}
	
	sort(array);
	
	for(int i = 0; i < 3; i++){
		printf("%d\n", array[i]);
	}
	return 0;
}

vector<int> sort(vector<int> &array){
    int temp = 0;
    for(int i = 0; i < array.size(); i++){
        for(int j = 0; j < array.size() - i - 1; j++){
            if(array[j] < array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array;
}