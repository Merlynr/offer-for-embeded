#include <iostream>
#include <string>

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
    string name;
    string sex;
    void say()
    {
        cout << "Teacher" << name << "is" << sex << endl;
    }
};

void display(struct Student stu)
{
    cout << stu.name << "����ͺͳɼ��ǣ�" << stu.age << "��" << stu.score << endl;
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
    tec.name = "Teacher";
    tec.sex = "Student";
    tec.say();

    return 0;
}