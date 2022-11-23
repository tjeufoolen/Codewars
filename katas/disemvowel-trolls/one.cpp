# include <string>
std::string disemvowel(std::string str)
{
  for (auto letter : "aAeEoOiIuU") 
  {
    str.erase(remove(str.begin(), str.end(), letter), str.end());
  }
  return str;
}