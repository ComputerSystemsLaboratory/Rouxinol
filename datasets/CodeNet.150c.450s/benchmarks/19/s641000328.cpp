#include<iostream>

int main()
{
		int arr[2], tmp;
		while(true)
		{
			std::cin >> arr[0] >> arr[1];
			if(arr[0] == 0 && arr[1] == 0) break;
			if(arr[0] > arr[1]) {
					tmp = arr[1];
					arr[1] = arr[0];
					arr[0] = tmp;
			}
			std::cout << arr[0] << " " << arr[1] << "\n";
		}
		return 0;
}