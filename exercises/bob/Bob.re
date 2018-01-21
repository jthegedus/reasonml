/*
   ? => "Sure." - last, non-whitespace char is ?
   CAPS => "Whoa, chill out!" - each alpha char is a cap
   CAPS? => "Calm down, I know what I'm doing!" - combination of above
   "" => "Fine. Be that way!" - no-alpha-numeric
   other => "Whatever."
 */
type speechType =
  | Question
  | Shouting
  | ShoutingQuestion
  | Nothing
  | Other;

let analyseSpeech = (speech: string) : speechType => {
  /* check if only whitespace */
  let trimmedSpeech = String.trim(speech);
  if (String.length(trimmedSpeech) > 0) {
    /* has some text */
    /* check that last is ? */
    let question: bool =
      String.contains_from(
        trimmedSpeech,
        String.length(trimmedSpeech) - 1,
        '?'
      );
    let shouting: bool = trimmedSpeech === String.uppercase(trimmedSpeech);
    let noAlphaChars: bool =
      String.lowercase(trimmedSpeech) === String.uppercase(trimmedSpeech);
    if (noAlphaChars && ! question) {
      Other;
    } else if (noAlphaChars && question) {
      Question;
    } else if
      /* noAlpha ! question == other */
      /* noAlpha && question == ? */
      (question && shouting) {
      Js.log(trimmedSpeech);
      ShoutingQuestion;
    } else if (question && ! shouting) {
      Question;
    } else if (! question && shouting) {
      Shouting;
              /* Not a question */
    } else {
      Other;
           /* Not a question or shouting */
    };
  } else {
    Nothing;
  };
  /* check if any alpha-numeric cahrs */
  /* check last non-whitespace char if ? */
};

let hey = (speech: string) : string => {
  /* determine type of speech */
  let speechType: speechType = analyseSpeech(speech);
  /* switch on the speech type */
  switch speechType {
  | Question => "Sure."
  | Shouting => "Whoa, chill out!"
  | ShoutingQuestion => "Calm down, I know what I'm doing!"
  | Nothing => "Fine. Be that way!"
  | Other => "Whatever."
  };
};