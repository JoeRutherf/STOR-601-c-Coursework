#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <unordered_map>
#include "IS_STABLE.h"

int main()
	{
std::string A{"A"};
std::string B{"B"};
std::string C{"C"};
std::string D{"D"};
std::string a{"a"};
std::string b{"b"};
std::string c{"c"};
std::string d{"d"};

std::unordered_map<std::string,std::vector<std::string>> men_preferences;
std::unordered_map<std::string,std::vector<std::string>> women_preferences;
std::unordered_map<std::string,std::string> pairings;

pairings[A]="a";
pairings[B]="b";
pairings[C]="c";
pairings[D]="d";

men_preferences[A] = {c,b,d,a};
men_preferences[B] = {b,a,c,d};
men_preferences[C] = {b,d,a,c};
men_preferences[D] = {c,a,d,b};

women_preferences[a] = {A,B,C,D};
women_preferences[b] = {C,A,D,B};
women_preferences[c] = {C,B,D,A};
women_preferences[d] = {B,A,C,D};


std::string h;
h = IS_STABLE(men_preferences, women_preferences,pairings);
std::cout << h << std::endl;

return(0);
}
