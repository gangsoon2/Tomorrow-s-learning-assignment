#include <iostream>

using namespace std;

double addTotal(double num1, double num2, double num3, double num4, double num5)
{
	return num1 + num2 + num3 + num4 + num5;
}
double addAvg(double num1, int num2)
{
	return num1 / num2;
}
int main()
{
	double score[5];

	cout << "첫번째 학생의 점수를 입력해 주세요 : ";
	cin >> score[0];

	cout << "둘번째 학생의 점수를 입력해 주세요 : ";
	cin >> score[1];

	cout << "셋번째 학생의 점수를 입력해 주세요 : ";
	cin >> score[2];

	cout << "네번째 학생의 점수를 입력해 주세요 : ";
	cin >> score[3];

	cout << "다섯번째 학생의 점수를 입력해 주세요 : ";
	cin >> score[4];

	double totalScore = addTotal(score[0], score[1], score[2], score[3], score[4]);
	double totalAvg = addAvg(totalScore, 5);

	cout << "학생 5명의 총합 점수는 : " << totalScore << " 입니다" << endl;
	cout << "학생 5명의 평균 점수는 : " << totalAvg << "입니다" << endl;

	return 0;
}
