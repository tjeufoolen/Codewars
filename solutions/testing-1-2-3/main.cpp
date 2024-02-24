#include <string>
#include <vector>

std::vector<std::string> number(const std::vector<std::string> &lines)
{
    std::vector<std::string> numberedLines = {};
  
    for (size_t i=0; i<lines.size(); i++) 
    {
        std::string str = std::to_string(i+1) + ": " + lines[i]; 
        numberedLines.push_back(str);
    }
  
    return numberedLines;
}