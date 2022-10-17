#include <iostream>

using namespace std;

struct Student
{
    /* data */
    char *name;
    int age;
    float score;
};

class Teacher
{
public:
    char *name;
    char *sex;

}

void
display(struct Student stu)
{
    cout << stu.name << "的年纪和成绩是：" << stu.age << "和" << stu.score << endl;
}

int main()
{
    struct Student stu;
    char name[100] = "Student";
    stu.name = name;
    stu.age = 100;
    stu.score = 75.6;

    display(stu);

    return 0;
}