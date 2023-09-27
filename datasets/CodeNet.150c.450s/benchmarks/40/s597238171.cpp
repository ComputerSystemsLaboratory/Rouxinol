#include <iostream>
#include <string>

class Dice{
public:
	Dice(int label1, int label2, int label3, int label4, int label5, int label6)
	{
		m_label[0] = label1;
		m_label[1] = label2;
		m_label[2] = label3;
		m_label[3] = label4;
		m_label[4] = label5;
		m_label[5] = label6;
	}

	void rollDice(std::string command)
	{
		if (command == "E") {
			int tmpLabelV = m_label[0];
			m_label[0] = m_label[3];
			m_label[3] = m_label[5];
			m_label[5] = m_label[2];
			m_label[2] = tmpLabelV;
		}
		else if (command == "N") {
			int tmpLabelV = m_label[0];
			m_label[0] = m_label[1];
			m_label[1] = m_label[5];
			m_label[5] = m_label[4];
			m_label[4] = tmpLabelV;
		}
		else if (command == "S") {
			int tmpLabelV = m_label[0];
			m_label[0] = m_label[4];
			m_label[4] = m_label[5];
			m_label[5] = m_label[1];
			m_label[1] = tmpLabelV;
		}
		else if (command == "W") {
			int tmpLabelV = m_label[0];
			m_label[0] = m_label[2];
			m_label[2] = m_label[5];
			m_label[5] = m_label[3];
			m_label[3] = tmpLabelV;
		}

		return;
	}

	int getNumberOnTop(void)
	{
		return m_label[0];
	}

private:
	int m_label[6];
};

int main()
{
	int label1,label2,label3,label4,label5,label6;

	std::cin >> label1 >> label2 >> label3 >> label4 >> label5 >> label6;
	Dice dice1(label1, label2, label3, label4, label5, label6);

	std::string commands;
	std::cin >> commands;

	for (int i = 0; i < commands.length(); i++) {
		dice1.rollDice(commands.substr(i, 1));
	}

	std::cout << dice1.getNumberOnTop() << std::endl;
}