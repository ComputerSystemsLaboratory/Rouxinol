//	-*- mode: C++ -*-
//	Dice I
//
//		Write a program to simulate rolling a dice, which can be constructed by the following net.
//
//
//
//
//
//
//		As shown in the figures, each face is identified by a different label from 1 to 6.
//
//		Write a program which reads integers assigned to each face identified by the label and a sequence of commands to roll the dice, and prints the integer on the top face. At the initial state, the dice is located as shown in the above figures.
//
//	Input
//		In the first line, six integers assigned to faces are given in ascending order of their corresponding labels.
//
//		In the second line, a string which represents a sequence of commands, is given. The command is one of 'E', 'N', 'S' and 'W' representing four directions shown in the above figures.
//
//	Output
//		Print the integer which appears on the top face after the simulation.
//
//	Constraints
//		0≤ the integer assigned to a face ≤100
//		0≤ the length of the command ≤100
//	Sample Input 1
//		1 2 4 8 16 32
//		SE
//	Sample Output 1
//		8
//		You are given a dice where 1, 2, 4, 8, 16 are 32 are assigned to a face labeled by 1, 2, ..., 6 respectively. After you roll the dice to the direction S and then to the direction E, you can see 8 on the top face.
//
//
//
//	Sample Input 2
//		1 2 4 8 16 32
//		EESWN
//	Sample Output 2
//		32

#include <iostream>
#include <vector>
#include <string>

const unsigned int	faces	{6};

void	E(std::vector<unsigned int>& dice);
void	N(std::vector<unsigned int>& dice);
void	S(std::vector<unsigned int>& dice);
void	W(std::vector<unsigned int>& dice);

int	main(int	argc,
		 char*	argv[])
{
	std::vector<unsigned int>	dice	{};
	dice.resize(faces, 0);

	for(unsigned int i = 0; i < faces; i++){
		std::cin >> dice[i];
	}

	std::string	commands	{};
	std::cin >> commands;

	for(unsigned int i = 0; i < commands.length(); i++){
		switch(commands[i]){
		case 'E':
			E(dice);
			break;
		case 'N':
			N(dice);
			break;
		case 'S':
			S(dice);
			break;
		case 'W':
			W(dice);
			break;
		default:
			break;
		}
	}

	std::cout << dice[0] << '\n';
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

