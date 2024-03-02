#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <unordered_map>
#include <fstream>
#include <sstream>

template <typename T>
T lexical_cast(const std::string& str);

template<typename data_type,
template <typename... table_type_args> typename table_type,
template <typename... row_type_args> typename row_type>
table_type<row_type<data_type> > csvtable(const std::string& filename);


std::unordered_map<std::string,std::vector<std::string> > read(std::string NAME1);
