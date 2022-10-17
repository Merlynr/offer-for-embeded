#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    string sex;
    int age;
    void say()
    {
        cout << name << " is " << sex << endl;
        cout << name << " is " << age << endl;
        return;
    }
};

int main(int argc, char **argv)
{
    Person p;
    p.name = "John";
    p.sex = "man";
    p.age = 24;
    p.say();
    return 0;
}