open Jest;

open Expect;

let () =
  describe("Bob", () => {
    test("stating something", () =>
      expect(Bob.hey("Tom-ay-to, tom-aaaah-to.")) |> toEqual("Whatever.")
    );
    test("shouting", () =>
      expect(Bob.hey("WATCH OUT!")) |> toEqual("Whoa, chill out!")
    );
    test("asking a question", () =>
      expect(Bob.hey("Does this cryogenic chamber make me look fat?"))
      |> toEqual("Sure.")
    );
    test("shouting gibberish", () =>
      expect(Bob.hey("FCECDFCAAB")) |> toEqual("Whoa, chill out!")
    );
    test("asking a numeric question", () =>
      expect(Bob.hey("You are, what, like 15?")) |> toEqual("Sure.")
    );
    test("asking gibberish", () =>
      expect(Bob.hey("fffbbcbeab?")) |> toEqual("Sure.")
    );
    test("talking forcefully", () =>
      expect(Bob.hey("Let's go make out behind the gym!"))
      |> toEqual("Whatever.")
    );
    test("using acronyms in regular speech", () =>
      expect(Bob.hey("It's OK if you don't want to go to the DMV."))
      |> toEqual("Whatever.")
    );
    /*  */
    test("forceful questions", () =>
      expect(Bob.hey("WHAT THE HELL WERE YOU THINKING?"))
      |> toEqual("Calm down, I know what I'm doing!")
    );
    test("shouting numbers", () =>
      expect(Bob.hey("1, 2, 3 GO!")) |> toEqual("Whoa, chill out!")
    );
    test("only numbers", () =>
      expect(Bob.hey("1, 2, 3")) |> toEqual("Whatever.")
    );
    test("question with only numbers", () =>
      expect(Bob.hey("4?")) |> toEqual("Sure.")
    );
    test("shouting with special characters", () =>
      expect(Bob.hey("ZOMG THE %^*@#$(*^ ZOMBIES ARE COMING!!11!!1!"))
      |> toEqual("Whoa, chill out!")
    );
    test("shouting with no exclamation mark", () =>
      expect(Bob.hey("I HATE YOU")) |> toEqual("Whoa, chill out!")
    );
    test("statement containing question mark", () =>
      expect(Bob.hey("Ending with a ? means a question."))
      |> toEqual("Whatever.")
    );
    test("prattling on", () =>
      expect(Bob.hey("Wait! Hang on.  Are you going to be OK?"))
      |> toEqual("Sure.")
    );
    test("silence", () =>
      expect(Bob.hey("")) |> toEqual("Fine. Be that way!")
    );
    test("prolonged silence", () =>
      expect(Bob.hey("   ")) |> toEqual("Fine. Be that way!")
    );
    test("alternate silence", () =>
      expect(Bob.hey("\t\t\t\t\t\t\t\t\t\t")) |> toEqual("Fine. Be that way!")
    );
    test("multiple line question", () =>
      expect(Bob.hey("\nDoes this cryogenic chamber make me look fat?\nno"))
      |> toEqual("Whatever.")
    );
    test("starting with whitespace", () =>
      expect(Bob.hey("         hmmmmmmm...")) |> toEqual("Whatever.")
    );
    test("ending with whitepace", () =>
      expect(Bob.hey("Okay if like press my  spacebar  quite a bit?   "))
      |> toEqual("Sure.")
    );
    test("other whitespace", () =>
      expect(Bob.hey("\n\r \t")) |> toEqual("Fine. Be that way!")
    );
    test("non-question ending with whitespace", () =>
      expect(Bob.hey("This is a statement ending with whitespace      "))
      |> toEqual("Whatever.")
    );
  });