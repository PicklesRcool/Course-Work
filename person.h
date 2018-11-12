#ifndef PERSON_H
#define PERSON_H

#include <string>
typedef unsigned uint;

class Person
{
public:
    explicit Person() = default;

private:
    std::string surname;
    std::string name;

    struct Date { uint day; uint month; uint year; } birthDay;

    friend class FamilyTree;
};

#endif // PERSON_H
