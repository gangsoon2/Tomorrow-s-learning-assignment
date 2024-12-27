#include <iostream>

using namespace std;

int main()
{
	double score[5];

	cout << "첫번째 학생의 점수를 입력해 주세요 : " << endl;
	cin >> score[0];

	cout << "첫번째 학생의 점수를 입력해 주세요 : " << endl;
	cin >> score[1];

	cout << "첫번째 학생의 점수를 입력해 주세요 : " << endl;
	cin >> score[2];

	cout << "첫번째 학생의 점수를 입력해 주세요 : " << endl;
	cin >> score[3];

	cout << "첫번째 학생의 점수를 입력해 주세요 : " << endl;
	cin >> score[4];

	double totalscore = score[0] + score[1] + score[2] + score[3] + score[4];
	double totalavg = totalscore / 5;

	cout << "학생들 총 점수는 : " << totalscore << endl;
	cout << "학생들 총 평균은 : " << totalavg << endl;

	return 0;
}