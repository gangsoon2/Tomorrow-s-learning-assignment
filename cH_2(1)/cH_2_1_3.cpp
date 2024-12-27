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
    cout << "�л� ���� �Է��� �ּ���: ";
    cin >> n;

    vector<double> scores(n);

    cout << "�л����� ������ �Է��� �ּ���: ";
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    double totalScore = addTotal(scores);
    double totalAvg = addAvg(totalScore, n);

    cout << "�л� " << n << "���� ���� ������: " << totalScore << "�Դϴ�" << endl;
    cout << "�л� " << n << "���� ��� ������: " << totalAvg << "�Դϴ�" << endl;

    return 0;
}
