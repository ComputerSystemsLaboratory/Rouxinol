#include<iostream>

int JudgeGrade(int MiddleExam_, int FinalExam_, int ReExam_);

int main(void) {
	int MiddleExam=-2, FinalExam=-2, ReExam = -2;
	while (1) {
		std::cin >> MiddleExam >> FinalExam >> ReExam;
		if (MiddleExam == -1 && FinalExam == -1 && ReExam == -1) { break; }
		JudgeGrade( MiddleExam,  FinalExam,  ReExam);
	}
	//	system("pause");
	return 0;
}
int JudgeGrade(int MiddleExam_, int FinalExam_ ,int ReExam_){
	
	if (MiddleExam_ == -1 || FinalExam_ == -1) { 
		std::cout << "F" << std::endl; 
		//return 0;
	}
	else   {
		int ResultScore = MiddleExam_ + FinalExam_;
		if (80 <= ResultScore) {
			std::cout << "A" << std::endl;
		}
		else if (65<=ResultScore  &&ResultScore<80) {
			std::cout << "B" << std::endl;
		}
		else if (50<=ResultScore  &&ResultScore<65) {
			std::cout << "C" << std::endl;
		}
		else if (30 <= ResultScore  &&ResultScore<50) {
			if(50<=ReExam_){ std::cout << "C" << std::endl; }
			else { std::cout << "D" << std::endl; }
		}
		else if (ResultScore<30) {
			std::cout << "F" << std::endl;
		}
	}
	return 0;
}