func findOutlier(_ array: [Int]) -> Int {
  var even: [Int] = []
  var uneven: [Int] = []
  
  for item in array {
    if item % 2 == 0 {
      even.append(item)
    } else {
      uneven.append(item)
    }
  }
  
  return even.count == 1 ? even[0] : uneven[0]
}