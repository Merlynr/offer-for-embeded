#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    string sex;
    int age;
};

int main(int argc, char **argv)
{
    Person p;
    p.name = "John";
    p.sex = "man";
    p.age = 24;
}