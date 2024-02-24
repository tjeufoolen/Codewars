function toCamelCase(str) {
  let count = 0;
  return str.replace(/(\-)?(\_)?([a-z]+)/gi, function () {
    let word = arguments[3];
    if (count++ == 0) return word;
    return word.charAt(0).toUpperCase() + word.slice(1);
  });
}
