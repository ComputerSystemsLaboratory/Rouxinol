#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;


void north(int* faces) {
	int tmp[7];

	//top(1) to back(5)
	tmp[5] = faces[1];

	//front(2) to top(1)
	tmp[1] = faces[2];

	//right(3) to right(3)
	tmp[3] = faces[3];

	//left(4) to left(4)
	tmp[4] = faces[4];

	//back(5) to bottom(6)
	tmp[6] = faces[5];

	//bottom(6) to front(2)
	tmp[2] = faces[6];

	memcpy(faces, tmp, sizeof(tmp));

}
void west(int* faces) {
	int tmp[7];

	//top(1) to left(4)
	tmp[4] = faces[1];

	//front(2) to front(2)
	tmp[2] = faces[2];

	//right(3) to top(1)
	tmp[1] = faces[3];

	//left(4) to bottom(6)
	tmp[6] = faces[4];

	//back(5) to back(5)
	tmp[5] = faces[5];

	//bottom(6) to right(3)
	tmp[3] = faces[6];

	memcpy(faces, tmp, sizeof(tmp));

}

int dice(int *faces, int *questions) {
	for (int i = 1; i < 7; i++)
	{
		if (faces[i] == questions[0]) {
			if (i == 3 || i == 4)west(faces);
			break;
		}
	}
	
	while (true)
	{
		north(faces);
		if (faces[2] == questions[0])break;
	}

	while (true)
	{
		west(faces);
		if (faces[3] == questions[1])break;
	}

	return faces[1];
}


int main() {
	vector<int> answers;
	int faces[7], questions[2], ques_num;;
	for (int i = 1; i < 7; i++)
	{
		cin >> faces[i];
	}

	cin >> ques_num;

	for (int i = 0; i < ques_num; i++)
	{
		for (int i = 0; i < 2; i++)
		{
			cin >> questions[i];
		}
		answers.push_back(dice(faces, questions));
	}
	
	for (int i = 0; i < ques_num; i++)
	{
		cout << answers.at(i) << endl;
	}

	return 0;
}