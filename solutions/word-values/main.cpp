std::vector<int> wordValue(std::vector <std::string> arr){
    std::vector<int> values = {};
  
    // Loop through all words
    for (auto &str : arr) 
    {
        int sum = 0;
      
        // Remove whitespaces
        str.erase(remove_if(str.begin(), str.end(), isspace), str.end());
      
        // Loop through all characters and calculate sum
        for (char &c : str) {
            sum += (c - 96);
        }
      
        // Adds sum to array, but multiplies it one last time by the position where it will be added
        values.insert(values.end(), (values.size() + 1) * sum);
    }
  
    return values;
}