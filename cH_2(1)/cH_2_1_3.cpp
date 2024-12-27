#include <iostream>
#include <vector>

using namespace std;

double addTotal(const vector<double>& scores)
{
    double total = 0.0;
    for (double score : scores) {
        total += score;
    }
    return total;
}

double addAvg(double total, int count)
{
    return total / count;
}

int main()
{
    int n;
    cout << "학생 수를 입력해 주세요: ";
    cin >> n;

    vector<double> scores(n);

    cout << "학생들의 점수를 입력해 주세요: ";
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    double totalScore = addTotal(scores);
    double totalAvg = addAvg(totalScore, n);

    cout << "학생 " << n << "명의 총합 점수는: " << totalScore << "입니다" << endl;
    cout << "학생 " << n << "명의 평균 점수는: " << totalAvg << "입니다" << endl;

    return 0;
}
