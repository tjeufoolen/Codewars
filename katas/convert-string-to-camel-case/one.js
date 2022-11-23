function toCamelCase(str) {
  return str.replace(/([\-\_])+([a-z]+)/gi, function () {
    return arguments[2].charAt(0).toUpperCase() + arguments[2].slice(1);
  });
}
