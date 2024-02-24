function isIsogram(str) {
  str = str.toLowerCase();
  for (let c of str.split("")) {
    if (str.split(c).length > 2) return false;
  }
  return true;
}
