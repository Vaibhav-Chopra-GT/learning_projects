#include <iostream>
#include <math.h>

using namespace std;

class students
{
    private:
    int roll;
    int max_marks;
    int marks;

    public:
    // void setRoll(int roll) {
    //     this->roll = roll;
    // }
    students(int giv_roll, int marks, int max_marks=100) {
        roll = giv_roll;
        this->max_marks = max_marks;
        this->marks = marks;
    }
    void show_data() {
        cout<<this->roll<<endl;
        cout<<this->max_marks<<endl;
        cout<<this->marks<<endl;
    }
};


int main()
{
    students s2(5, 78), s3(6, 89, 95);
    s2.show_data();
    s3.show_data();

}