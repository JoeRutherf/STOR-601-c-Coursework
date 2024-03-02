#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <unordered_map>
#include "csvtable.h"
#include "Fundamental.h"
#include "IS_STABLE.h"

int main(int argc, char* argv[])
{

std::vector<std::string> args(argc - 1);
  for(int i = 0; i < argc - 1; i++)
    {
      args[i] = std::string(argv[i+1]);
      
    }


std::unordered_map<std::string,std::vector<std::string> > h;
std::unordered_map<std::string,std::vector<std::string> > j;
std::unordered_map<std::string,std::string> k;
std::string l;



h = read("men-preferences.csv");
j = read("women-preferences.csv");


k=Fundamental(h,j);

for(auto&x:k){
std::cout << x.first << x.second << std::endl;}

l = IS_STABLE(h,j,k);

std::cout << l << std::endl;

return(0);
}
