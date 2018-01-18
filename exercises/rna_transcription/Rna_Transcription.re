/** String only solution
 *
 * loop each char in word
 * check letter and perform transcription
 */
let toRnaFromString = (rna: string) =>
  String.map(
    charAt =>
      switch charAt {
      | 'C' => 'G'
      | 'G' => 'C'
      | 'A' => 'U'
      | 'T' => 'A'
      | _ => charAt
      },
    rna
  )