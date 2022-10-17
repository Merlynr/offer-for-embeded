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
    void say()
    {
        cout << "Teacher" << name << "is" << sex << endl;
    }
};

void display(struct Student stu)
{
    cout << stu.name << "的年纪和成绩是：" << *stu.age << "和" << *stu.score << endl;
}

int main()
{
    struct Student stu;
    char name[100] = "Student";
    stu.name = name;
    stu.age = 100;
    stu.score = 75.6;

    display(stu);

    class Teacher tec;
    tec.name = "Huang";
    tec.sex = "man";
    tec.say();

    return 0;
}