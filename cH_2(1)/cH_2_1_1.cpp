#include <iostream>

using namespace std;

int main()
{
	double score[5];

	cout << "ù��° �л��� ������ �Է��� �ּ��� : " << endl;
	cin >> score[0];

	cout << "ù��° �л��� ������ �Է��� �ּ��� : " << endl;
	cin >> score[1];

	cout << "ù��° �л��� ������ �Է��� �ּ��� : " << endl;
	cin >> score[2];

	cout << "ù��° �л��� ������ �Է��� �ּ��� : " << endl;
	cin >> score[3];

	cout << "ù��° �л��� ������ �Է��� �ּ��� : " << endl;
	cin >> score[4];

	double totalscore = score[0] + score[1] + score[2] + score[3] + score[4];
	double totalavg = totalscore / 5;

	cout << "�л��� �� ������ : " << totalscore << endl;
	cout << "�л��� �� ����� : " << totalavg << endl;

	return 0;
}