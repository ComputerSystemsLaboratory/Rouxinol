//	-*- mode: C++ -*-
//	Dice II
//
//		Construct a dice from a given sequence of integers in the same way as Dice I.
//
//		You are given integers on the top face and the front face where the dice was rolled in the same way as Dice I. Write a program to print an integer on the right side face.
//
//
//
//
//
//	Input
//		In the first line, six integers assigned to faces are given in ascending orde\ r of their corresponding labels. In the second line, the number of questions q is given.
//
//		In the following q lines, q questions are given. Each question consists of two integers on the top face and the front face respectively.
//
//	Output
//		For each question, print the integer on the right side face.
//
//	Constraints
//		0≤ the integer assigned to a face ≤100
//		The integers are all different
//		1≤q≤24
//	Sample Input
//		1 2 3 4 5 6
//		3
//		6 5
//		1 3
//		3 2
//	Sample Output
//		3
//		5
//		6

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

const unsigned int	faces	{6};

void	E(std::vector<unsigned int>& dice);
void	N(std::vector<unsigned int>& dice);
void	S(std::vector<unsigned int>& dice);
void	W(std::vector<unsigned int>& dice);
void	rotate(std::vector<unsigned int>&	dice);

unsigned int	Right(std::vector<unsigned int>&				dice,
					  std::pair<unsigned int, unsigned int>&	q);
unsigned int	TopSearch(std::vector<unsigned int>&	dice,
						  unsigned int					top);
void	ENSW(std::vector<unsigned int>&				dice,
			 unsigned int							topPos);

int main(int	argc,
		 char*	argv[])
{
	std::vector<unsigned int>	dice	{};
	dice.resize(faces, 0);

	for(unsigned int i = 0; i < faces; i++){
		std::cin >> dice[i];
	}

	unsigned int	n	{0};
	std::cin >> n;

	std::vector<std::pair<unsigned int, unsigned int>>	q	{};
	q.resize(n);

	for(unsigned int i = 0; i < n; i++){
		std::pair<unsigned int, unsigned int>	_q	{};

		std::cin >> _q.first >> _q.second;
		q[i]	= _q;
	}

	for(auto p : q){
		std::cout << Right(dice, p) << '\n';
	}

    return 0;
}

void	E(std::vector<unsigned int>& dice)
{
	unsigned int	x	= dice[0];
	dice[0]	= dice[3];
	dice[3]	= dice[5];
	dice[5]	= dice[2];
	dice[2]	= x;
}

void	N(std::vector<unsigned int>& dice)
{
	unsigned int	x	= dice[0];
	dice[0]	= dice[1];
	dice[1]	= dice[5];
	dice[5]	= dice[4];
	dice[4]	= x;
}

void	S(std::vector<unsigned int>& dice)
{
	unsigned int	x	= dice[0];
	dice[0]	= dice[4];
	dice[4]	= dice[5];
	dice[5]	= dice[1];
	dice[1]	= x;
}

void	W(std::vector<unsigned int>& dice)
{
	unsigned int	x	= dice[0];
	dice[0]	= dice[2];
	dice[2]	= dice[5];
	dice[5]	= dice[3];
	dice[3]	= x;
}

void	rotate(std::vector<unsigned int>&	dice)
{
	unsigned int	x	= dice[1];
	dice[1]	= dice[2];
	dice[2]	= dice[4];
	dice[4]	= dice[3];
	dice[3]	= x;
}

unsigned int	Right(std::vector<unsigned int>&				dice,
					  std::pair<unsigned int, unsigned int>&	q)
{
	// Top search
	unsigned int	topPos	= TopSearch(dice, q.first);

	ENSW(dice, topPos);
	while(dice[1] != q.second){
		rotate(dice);
	}

	return	dice[2];
}

unsigned int	TopSearch(std::vector<unsigned int>&	dice,
						  unsigned int					top)
{
	unsigned int	topPos	{0};
	for(auto	value : dice){
		if(value == top){
			break;
		}
		++topPos;
	}

	return	topPos;
}

void	ENSW(std::vector<unsigned int>&				dice,
			 unsigned int							topPos)
{
	switch(topPos){
	case 0:
		break;
	case 1:
		N(dice);
		break;
	case 2:
		W(dice);
		break;
	case 3:
		E(dice);
		break;
	case 4:
		S(dice);
		break;
	case 5:
		S(dice);
		S(dice);
		break;
	default:
		break;
	}
}

