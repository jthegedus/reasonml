/** recursive solution
 * recurse on every char except the first char.
 * Add the first char to the end of the result of the recursion.
 *
 * Language features covered:
 * - 'switch' for filtering
 * - 'rec' for recursive
 * - '++'  string concatenation
 *
 * hello
 * recurse(ello) + h
 * recurse(llo) + e + h
 * recurse(lo) + l + eh
 * recurse(o) + l + leh
 * recurse() + o +lleh
 * stop recursing and return 'olleh'
 */
let rec recursion = (word: string) =>
  switch word {
  | "" => ""
  | _ =>
    recursion(String.sub(word, 1, String.length(word) - 1))
    ++ String.sub(word, 0, 1)
  };

/** loop solution
 * reverse loop over the word.
 * add the last char to the end of a new let mutation.Arg
 *
 * Language features covered:
 * - ref
 * - imperative loops
 * - string concatentation
 */
let loop = (word: string) => {
  let reverse = ref("");
  for (x in String.length(word) - 1 downto 0) {
    reverse := reverse^ ++ String.sub(word, x, 1);
  };
  reverse^;
};