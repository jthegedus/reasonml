/** Part 1 - Char only solution */
let toRnaFromChar = (rnaChar: char) : char =>
  switch rnaChar {
  | 'C' => 'G'
  | 'G' => 'C'
  | 'A' => 'U'
  | 'T' => 'A'
  | _ => '#'
  };

/** Part 2 - String only solution
 *
 * loop each char in word
 * check letter and perform transcription via toRnaFromChar
 */
let toRnaFromString = (rna: string) =>
  String.map(charAt => toRnaFromChar(charAt), rna);

/** Part 3 - Validation */
/** Valid Chars
   */
let validChars = "ACGTU";

/** Input validation
   *
   */
let validRna = (rna: string) : bool => {
  let rna = String.capitalize(rna);
  let valid = ref(true);
  let x = ref(0);
  while (valid^ && x^ < String.length(rna)) {
    valid := String.contains(validChars, rna.[x^]);
    x := x^ + 1; /* increment counter */
  };
  let msg = valid^ ? "Valid" : "Invalid";
  valid^;
};

/** Part 4 - String with validation */
let toRna = (rna: string) =>
  validRna(rna) ? toRnaFromString(rna) : "Invalid input";