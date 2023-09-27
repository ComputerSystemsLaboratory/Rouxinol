#include<iostream>
#include <string>
#include<stdio.h>
#include <math.h>
using namespace std;

void East(int *num)
{
	int tmp;
	tmp = num[0];
    num[0] = num[3];
	num[3] = num[5];
	num[5] = num[2];
	num[2] = tmp;
}
void West(int *num)
{
	int tmp;
	tmp = num[0];
    num[0] = num[2];
	num[2] = num[5];
	num[5] = num[3];
	num[3] = tmp;
}
void North(int *num)
{
	int tmp;
	tmp = num[0];
    num[0] = num[1];
	num[1] = num[5];
	num[5] = num[4];
	num[4] = tmp;
}
void Sourth(int *num)
{
	int tmp;
	tmp = num[0];
    num[0] = num[4];
	num[4] = num[5];
	num[5] = num[1];
	num[1] = tmp;
}

int main()
{
	int n;

	int i;
	int nums[6];
	char str[101];
	string st;

	for(i=0; i<6; i++)cin >> nums[i];
	cin >> st;

	for(i=0; i<st.size(); i++){
        switch(st.c_str()[i]){
		case 'E':
            East(nums);
			break;
		case 'W':
            West(nums);
			break;
		case 'N':
			North(nums);
			break;
		case 'S':
			Sourth(nums);
			break;
		}
	}
	printf("%d\n", nums[0]);
    return 0;
}