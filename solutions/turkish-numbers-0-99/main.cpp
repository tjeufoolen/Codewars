#include <string>

std::string getTurkishNumber(unsigned int n) {
   std::string str;
  
  if (n > 9) {
    int tens=  n / 10 % 10;
    switch(tens) {
      // Tens  
      case 1: str += "on"; break;
      case 2: str += "yirmi"; break;
      case 3: str += "otuz"; break;
      case 4: str += "kırk"; break;
      case 5: str += "elli"; break;
      case 6: str += "altmış"; break;
      case 7: str += "yetmiş"; break;
      case 8: str += "seksen"; break;
      case 9: str += "doksan"; break;
    }
  }
  
  if (!str.empty()) str += " ";
  
  int units= n % 10;
  switch(units) {
    // Units
    case 0: 
      if (str.empty()) {
        str += "sıfır"; 
      } else {
        str.pop_back();
      }
    break;
    case 1: str += "bir"; break;
    case 2: str += "iki"; break;
    case 3: str += "üç"; break;
    case 4: str += "dört"; break;
    case 5: str += "beş"; break;
    case 6: str += "altı"; break;
    case 7: str += "yedi"; break;
    case 8: str += "sekiz"; break;
    case 9: str += "dokuz"; break;
  }  
  
  return str;
}