#include <iostream>
#include <math.h>

using namespace std;
class students
{
private:
    int roll;
    int average;

public:
    int marks[3];
    students(int giveroll)
    {
        roll = giveroll;

        cout << roll << "\n";
    }
    void showdata()
    {
        cout << marks[0] << " " << marks[1] << " " << marks[2] << "\n";
    }

    int avg()
    {
        return (marks[0] + marks[1] + marks[2]) / 3;
    }
    int max()
    {
        int mmax = marks[0];

        for (int i = 0; i < 3; i += 1)
        {
            if (mmax < marks[i])
                mmax = marks[i];
        }
        return mmax;
    }
};
int main()
{
    int rollnumber[3];
    for (int i = 0; i < 3; i += 1)
    {
        cout << "Enter roll number" << i + 1 << "\n";
        cin >> rollnumber[i];
    }
    students s[3] = {students(rollnumber[0]), students(rollnumber[1]), students(rollnumber[3])};
    for (int j = 0; j < 3; j += 1)
        for (int i = 0; i < 3; i += 1)
        {
            {
                cout << "Enter marks" << i + 1 << "for student" << j + 1 << "\n";
                cin >> s[j].marks[i];
            }
        }
    for (int i = 0; i < 3; i += 1)
    {
        s[i].showdata();
        int avg = s[i].avg();
        s[i].max();
    }
    return 0;
}