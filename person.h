// person class by ChatGPT 4
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person
{
public:
    Person(const std::string &name, int age);

    bool operator==(const Person &other) const;
    bool operator!=(const Person &other) const;
    bool operator<(const Person &other) const;
    bool operator<=(const Person &other) const;
    bool operator>(const Person &other) const;
    bool operator>=(const Person &other) const;
    void setName(std::string &name);
    std::string getName();
    void setAge(int age);
    int getAge();
    friend std::ostream &operator<<(std::ostream &os, const Person &person);

private:
    std::string name;
    int age;
};

#endif // PERSON_H
