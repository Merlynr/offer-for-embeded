#include <iostream>

using namespace std;

struct Student
{
    /* data */
    char *name;
    int age;
    float score;
};

void display(struct Student stu)
{
    cout << stu.name << "的年纪" << stu.age << endl;
}
