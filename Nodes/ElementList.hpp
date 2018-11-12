#ifndef __ELEMENTLIST_HPP
#define __ELEMENTLIST_HPP

#include "Element.hpp"
#include <list>
#include <unordered_map>

class ElementList {
public:
    ElementList();
    void addElement(std::string aName, std::string aSurname, Element::TGender aGender,
                     std::string aFatherName, std::string aFatherSurname,
                     std::string aMotherName, std::string aMotherSurname , int aBirthYear, int aBirthMonth, int aBirthDay, std::string aBirthLocation);


    std::list<Element*> searchDescendantsByName( std::string aNameAscendant, std::string aNameDescendant);
    std::list<Element*> searchByName( std::string aName);
    std::list<Element*> searchBySurname( std::string aSurname);
    std::list<Element*> searchByBirthDate( int aYear, int aMonth, int aDay);
    std::list<Element*> searchByLocation( std::string aLocation);
    int countElements();
    void deleteAllElements();
    Element* getFatherElement( Element* aElement);
    Element* getMotherElement( Element* aElement);
    std::list<Element*> getList();
private:
    bool elementHasAncestorWithName(Element * aElement, std::string anAncestorName );
    std::map<std::string, Element*> theCompleteNameMap;
    std::unordered_multimap<std::string, Element*> theNameMap, theSurnameMap, theBirthDateMap, theBirthLocationMap;
};

#endif // __ELEMENTLIST_HPP
