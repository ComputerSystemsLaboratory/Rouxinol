#include <iostream>
#include <vector>

//??°???????????????????????????
class MathScore
{

public:

	//?????????????????????
	MathScore( int _MidExamScore , int _TermEndExamScore , int _ReexamScore )
		: MidtermExaminationScore( _MidExamScore ) ,
		  TermEndExaminationScore( _TermEndExamScore ) ,
		  ReexaminationScore( _ReexamScore ){}

	//?????????
	bool IsValid()
	{

		return ( MidtermExaminationScore != -1 ||
				 TermEndExaminationScore != -1 ||
				 ReexaminationScore      != -1 );

	}

	//????????¬????????£?????°??????
	char CalcRating()
	{

		if( MidtermExaminationScore == -1 || TermEndExaminationScore == -1 )
		{

			//??????????????????????????????????¬????
			return 'F';

		}

		int TotalExamScore = MidtermExaminationScore + TermEndExaminationScore;

		if( TotalExamScore >= 80 )
		{

			return 'A';

		}
		else if( TotalExamScore >= 65 )
		{

			return 'B';

		}
		else if( TotalExamScore >= 50 )
		{

			return 'C';

		}
		else if( TotalExamScore >= 30 )
		{

			if( ReexaminationScore >= 50 )
			{

				return 'C';

			}
	
			return 'D';

		}

		return 'F';

	}

private:

	//??????????¨??????°
	int MidtermExaminationScore;

	//??????????¨??????°
	int TermEndExaminationScore;

	//???????¨??????°
	int ReexaminationScore;

};

//????????\???
void InputMathScore( MathScore *OutMathScore )
{

	int m , f , r;

	std::cin >> m;
	std::cin >> f;
	std::cin >> r;
	
	*OutMathScore = MathScore( m , f , r );

}

//Entry Point
int main( int argc , char *argv[] )
{

	std::vector< MathScore > Scores;

	while( true )
	{

		MathScore Score( -1 , -1 , -1 );
		InputMathScore( &Score );
		if( !Score.IsValid() )
		{

			break;

		}

		Scores.push_back( Score );

	}

	for( std::vector< MathScore >::iterator it = Scores.begin() ; it != Scores.end() ; ++it )
	{

		std::cout << it->CalcRating() << std::endl;

	}

	return 0;

}