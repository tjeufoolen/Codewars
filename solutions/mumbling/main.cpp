class Accumul
{
public:
    static std::string accum(const std::string &s);
};

std::string Accumul::accum(const std::string &s) 
{
  std::string str;
  
  for (size_t i=0; i<s.size(); i++) 
  {
    if (i != 0) str += "-";
    
    // Add capital character
    str += std::toupper(s[i]);
    
    // Add non-capital characters
    for (size_t j=0; j<i; j++) {
      str += std::tolower(s[i]);
    }
  }
  return str;
}