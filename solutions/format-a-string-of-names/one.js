function list(names) {
  return names
    .map((obj) => obj.name)
    .join(", ")
    .replace(/, ([a-z]+)$/i, " & $1");
}
