#include<iostream>
void partition(int* arr, int head,int tail);
void printAns(int arr[], int len,int stan);
int main() {
	using namespace std;
	int len;
	cin >> len;
	int* arr = new int[len];
	for (int i = 0; i < len; i++)
		cin >> arr[i];
	partition(arr, 0, len - 1);
	return 0;
}
void partition(int* arr, int head, int tail) {
	int stan = arr[tail];
	int board = head - 1;							//board is on the left of the array at the beginning
	for (int j = head; j < tail; j++) {				//go through the array
		if (arr[j] <= stan) {
			board++;								//give space for element behind board
			std::swap(arr[board], arr[j]);
		}
	}
	std::swap(arr[board + 1], arr[tail]);
	printAns(arr, tail - head+1,board+1);
}
void printAns(int arr[], int len, int stan) {
	using std::cout;
	using std::endl;
	for (int i = 0; i < len; i++)
	{
		if (i)
			cout << " ";
		if (i == stan)
			cout << "[" << arr[i] << "]";
		else
			cout << arr[i];
	}
	cout << endl;
}
