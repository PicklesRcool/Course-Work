 #ifndef FAMILYTREE_H
#define FAMILYTREE_H


#include "person.h"
#include <boost/graph/adjacency_list.hpp>

#include <iostream>
#include <fstream>

using FamilyTreeGraph = boost::adjacency_list<boost::vecS, boost::vecS, boost::directedS,
                                         Person, boost::no_property>;

class FamilyTree {
public:
    FamilyTree();
    void clear();
    void add();
    void readFromFile(const std::ifstream& file);

    friend std::ofstream& operator<<(std::ofstream& out, const FamilyTree& tree);
    friend std::ifstream& operator>>(std::ifstream& in, FamilyTree& tree);

private:
    FamilyTreeGraph graph;
};

#endif // FAMILYTREE_H
