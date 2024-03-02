#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <unordered_map>
#include <fstream>
#include <sstream>


template <typename T>
T lexical_cast(const std::string& str)
{
    T var;
    std::istringstream iss;
    iss.str(str);
    iss >> var;
    // deal with any error bits that may have been set on the stream
    return var;
}

template<typename data_type,
template <typename... table_type_args> typename table_type,
template <typename... row_type_args> typename row_type>
table_type<row_type<data_type> > csvtable(const std::string& filename)
{
  table_type<row_type<data_type> > table;
  std::ifstream infile(filename);
  while(infile)
    {
      std::string s;
      if(!getline(infile,s)) break;
      std::istringstream ss(s);
      row_type<data_type> row;
      while(ss)
      {
         std::string s;
         if(!getline(ss,s,',')) break;
         row.push_back(lexical_cast<data_type>(s)); 
      }
      table.push_back(row);
    }
  return table;
}

#define readcsv csvtable<std::string,std::list,std::vector>

std::unordered_map<std::string,std::vector<std::string> > read(std::string NAME1){

std::string filename1 {NAME1};
  std::list<std::vector<std::string> > xy_pairs1 {readcsv(filename1)};
std::unordered_map<std::string,std::vector<std::string>> men_preferences;

for(std::vector<std::string>& xy_pair : xy_pairs1)
    {
         std::string X{xy_pair[0]};

        men_preferences[X]=xy_pair;
        men_preferences[X].erase(men_preferences[X].begin());
    }
    return(men_preferences);
}
