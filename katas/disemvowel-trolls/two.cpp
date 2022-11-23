# include <string>
std::string disemvowel(std::string str)
{
  str.erase(remove(str.begin(), str.end(), 'a'), str.end()); // remove a
  str.erase(remove(str.begin(), str.end(), 'A'), str.end()); // remove A
  str.erase(remove(str.begin(), str.end(), 'e'), str.end()); // remove e
  str.erase(remove(str.begin(), str.end(), 'E'), str.end()); // remove E
  str.erase(remove(str.begin(), str.end(), 'i'), str.end()); // remove i
  str.erase(remove(str.begin(), str.end(), 'I'), str.end()); // remove I
  str.erase(remove(str.begin(), str.end(), 'o'), str.end()); // remove o
  str.erase(remove(str.begin(), str.end(), 'O'), str.end()); // remove O
  str.erase(remove(str.begin(), str.end(), 'u'), str.end()); // remove u
  str.erase(remove(str.begin(), str.end(), 'U'), str.end()); // remove U
  
  return str;
}