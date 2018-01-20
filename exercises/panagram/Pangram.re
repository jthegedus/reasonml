let alphabet: string = "abcdefghijklmnopqrstuvwxyz";

let missingChars = (sentence: string) : bool => {
  let notMissing = ref(true);
  let count = ref(0);
  while (notMissing^ && count^ < 26) {
    let charAt = alphabet.[count^];
    notMissing := String.contains(sentence, charAt);
    count := count^ + 1;
  };
  let msg = notMissing^ ? "Valid" : "Invalid";
  Js.log({j|$sentence is $msg|j});
  notMissing^;
};

let isPangram = (sentence: string) : bool =>
  String.lowercase(sentence) |> missingChars;