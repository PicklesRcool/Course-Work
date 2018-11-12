#ifndef __NAMEGENERATOR_HPP
#define __NAMEGENERATOR_HPP

#include <vector>
#include <string>
#include <random>
#include <iostream>

namespace Utils {
static const std::vector<std::string> MALE_NAMES { "Fred", "Robert", "Jason", "Ernie", "Miguel", "Alberto"};
static const std::vector<std::string> SURNAMES { "Roberts", "Hamilton", "Gutierrez", "Albers" };                                                
static const std::vector<std::string> FEMALE_NAMES { "Julia", "Eva", "Anna", "Danielle", "Kimberly", "Sandra" };

class NameGenerator {
    public:
        static std::string GenerateMaleName() {
            std::cout << "GenMale: " << std::rand() % MALE_NAMES.size() << std::endl;
            return MALE_NAMES[ std::rand() % MALE_NAMES.size() ];
        }

        static std::string GenerateFemaleName() {
            std::cout << "GenFemale: " << std::rand() % FEMALE_NAMES.size() << std::endl;
            return FEMALE_NAMES[ std::rand() % FEMALE_NAMES.size() ];
        }

        static std::string GenerateSurname() {
            std::cout << "GenSurname: " << std::rand() % SURNAMES.size() << "\n";
            return SURNAMES[ std::rand() % SURNAMES.size() ];
        }

    };
}

#endif // __NAMEGENERATOR_HPP
