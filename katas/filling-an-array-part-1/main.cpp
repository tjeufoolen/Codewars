#include <vector>

std::vector<int> arr(int n = 0) {
  std::vector<int> arr = {};
  
  for(int i=0; i<n; i++) {
    arr.insert(arr.end(), i);
  }
  
  return arr;
}