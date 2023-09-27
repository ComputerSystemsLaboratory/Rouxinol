/*
 * ITP1_6_D.cpp
 *
 *  Created on: 2016/05/19
 *      Author: suna
 */

#include <iostream>

using namespace std;

int main(void)
{
	int row;		//???
	int column;		//???
	int vector_A[100][100] = {};
	int vector_B[100] = {};
	int vector_C[100] = {};

	cin >> row >> column;

	//Initialization
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < column; j++)
		{
			cin >> vector_A[i][j];
		}
	}

	for(int j = 0; j < column; j++)
	{
		cin >> vector_B[j];
	}

	//Multiplication
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < column; j++)
		{
			vector_C[i] += vector_A[i][j] * vector_B[j];
		}
	}

	//Output
	for(int i = 0; i < row; i++)
	{
		cout << vector_C[i] << endl;
	}

	return 0;
}