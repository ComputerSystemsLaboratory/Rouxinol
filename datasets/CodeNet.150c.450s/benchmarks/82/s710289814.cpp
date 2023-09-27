#include<iostream>
#include<cstring>

int rollDice(int& diceTopFace, int& diceFront, int& dice1, int& dice2, int& dice3, int& dice4, int& dice5, int& dice6);

int main(){

	int question;
	int diceTopFace;
	int diceFront;
	int ans;

	int dice1;
	int dice2;
	int dice3;
	int dice4;
	int dice5;
	int dice6;

	std::cin >> dice1 >> dice2 >> dice3 >> dice4 >> dice5 >> dice6;
	std::cin >> question;

	for (int i = 0; i < question; ++i){
		std::cin >> diceTopFace >> diceFront;

		
		ans=rollDice(diceTopFace, diceFront, dice1, dice2, dice3, dice4, dice5, dice6);

		if (ans == dice1){
			std::cout << dice1 << std::endl;
		}
		else if (ans == dice2){
			std::cout << dice2 << std::endl;
		}
		else if (ans == dice3){
			std::cout << dice3 << std::endl;
		}
		else if (ans == dice4){
			std::cout << dice4 << std::endl;
		}
		else if (ans == dice5){
			std::cout << dice5 << std::endl;
		}
		else if (ans == dice6){
			std::cout << dice6 << std::endl;
		}

	}
	return 0;
}


int rollDice(int& diceTopFace, int&diceFront, int& dice1, int& dice2, int& dice3, int& dice4, int& dice5, int& dice6){

	if (diceTopFace == dice1 && diceFront == dice2){
		diceTopFace = dice3;
		return diceTopFace;
	}

	else if (diceTopFace == dice1 && diceFront == dice3){

		diceTopFace = dice5;
		return diceTopFace;
	}

	else if (diceTopFace == dice1 && diceFront == dice4){

		diceTopFace = dice2;
		return diceTopFace;
	}

	else if (diceTopFace == dice1 && diceFront == dice5){

		diceTopFace = dice4;
		return diceTopFace;

	}


	//上面が２の時


	else if (diceTopFace == dice2 && diceFront == dice6){

		diceTopFace = dice3;
		return diceTopFace;
	}

	else if (diceTopFace == dice2 && diceFront == dice3){

		diceTopFace = dice1;
		return diceTopFace;
	}

	else if (diceTopFace == dice2 && diceFront == dice1){

		diceTopFace = dice4;
		return diceTopFace;
	}

	else if (diceTopFace == dice2 && diceFront == dice4){

		diceTopFace = dice6;
		return diceTopFace;
	}



	//上面が３の時


	else if (diceTopFace == dice3 && diceFront == dice6){

		diceTopFace = dice5;
		return diceTopFace;
	}

	else if (diceTopFace == dice3 && diceFront == dice5){

		diceTopFace = dice1;
		return diceTopFace;
	}

	else if (diceTopFace == dice3 && diceFront == dice1){

		diceTopFace = dice2;
		return diceTopFace;
	}

	else if (diceTopFace == dice3 && diceFront == dice2){

		diceTopFace = dice6;
		return diceTopFace;
	}



	//上面が４の時


	else if (diceTopFace == dice4 && diceFront == dice6){

		diceTopFace = dice2;
		return diceTopFace;
	}

	else if (diceTopFace == dice4 && diceFront == dice2){

		diceTopFace = dice1;
		return diceTopFace;
	}

	else if (diceTopFace == dice4 && diceFront == dice1){

		diceTopFace = dice5;
		return diceTopFace;
	}

	else if (diceTopFace == dice4 && diceFront == dice5){

		diceTopFace = dice6;
		return diceTopFace;
	}




	//上面が５の時


	else if (diceTopFace == dice5 && diceFront == dice6){

		diceTopFace = dice4;
		return diceTopFace;
	}

	else if (diceTopFace == dice5 && diceFront == dice4){

		diceTopFace = dice1;
		return diceTopFace;
	}

	else if (diceTopFace == dice5 && diceFront == dice1){

		diceTopFace = dice3;
		return diceTopFace;
	}

	else if (diceTopFace == dice5 && diceFront == dice3){

		diceTopFace = dice6;
		return diceTopFace;
	}



	//上面が６の時


	else if (diceTopFace == dice6 && diceFront == dice5){

		diceTopFace = dice3;
		return diceTopFace;
	}

	else if (diceTopFace == dice6 && diceFront == dice3){

		diceTopFace = dice2;
		return diceTopFace;
	}

	else if (diceTopFace == dice6 && diceFront == dice2){

		diceTopFace = dice4;
		return diceTopFace;
	}

	else if (diceTopFace == dice6 && diceFront == dice4){

		diceTopFace = dice5;
		return diceTopFace;
	}


}
