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

	cout << "ù��° �л��� ������ �Է��� �ּ��� : ";
	cin >> score[0];

	cout << "�ѹ�° �л��� ������ �Է��� �ּ��� : ";
	cin >> score[1];

	cout << "�¹�° �л��� ������ �Է��� �ּ��� : ";
	cin >> score[2];

	cout << "�׹�° �л��� ������ �Է��� �ּ��� : ";
	cin >> score[3];

	cout << "�ټ���° �л��� ������ �Է��� �ּ��� : ";
	cin >> score[4];

	double totalScore = addTotal(score[0], score[1], score[2], score[3], score[4]);
	double totalAvg = addAvg(totalScore, 5);

	cout << "�л� 5���� ���� ������ : " << totalScore << " �Դϴ�" << endl;
	cout << "�л� 5���� ��� ������ : " << totalAvg << "�Դϴ�" << endl;

	return 0;
}
