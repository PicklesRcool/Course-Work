#ifndef __ELEMENT_HPP
#define __ELEMENT_HPP

#include <map>
#include <string>
#include <iostream>
#include <stdio.h>

class Element {
public:
    typedef struct {
        int year;
        int month;
        int day;
    } TDate;

    enum TGender { MALE, FEMALE };

    Element(std::string aName, std::string aSurname, TGender aGender, std::string aFatherName,
             std::string aFatherSurname, std::string aMotherName,
             std::string aMotherSurname, int aBirthYear, int aBirthMonth, int aBirthDay,
             std::string aBirthLocation );
    void setFatherCredentials(std::string aName, std::string aSurname );
    void setMotherCredentials(std::string aName, std::string aSurname );
    bool setBirthDate(int aYear, int aMonth, int aDay );
    std::string getCompleteName() const;
    std::string getName() const;
    std::string getSurname() const;
    std::string getFatherCompleteName() const;
    std::string getMotherCompleteName() const;
    std::string getBirthDate() const;
    std::string getBirthLocation() const;
    Element::TGender getGender() const;
private:
    std::string theName, theSurname, theFatherName, theFatherSurname, theMotherName, theMotherSurname, theBirthLocation;
    TGender theGender;
    TDate theBirthDate;
};

#endif // __ELEMENT_HPP
