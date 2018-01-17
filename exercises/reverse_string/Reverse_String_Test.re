open Jest;

let () =
  describe("Reverse String", () => {
    describe("with a loop", () => {
      open Expect;
      test("empty string", () => {
        let expected = "";
        let actual = Reverse_String.loop("");
        expect(actual) |> toEqual(expected);
      });
      test("a word", () => {
        let expected = "tobor";
        let actual = Reverse_String.loop("robot");
        expect(actual) |> toEqual(expected);
      });
      test("a capitalized word", () => {
        let expected = "nemaR";
        let actual = Reverse_String.loop("Ramen");
        expect(actual) |> toEqual(expected);
      });
      test("a sentence with punctuation", () => {
        let expected = "!yrgnuh ma I";
        let actual = Reverse_String.loop("I am hungry!");
        expect(actual) |> toEqual(expected);
      });
      test("a palindrome", () => {
        let expected = "racecar";
        let actual = Reverse_String.loop("racecar");
        expect(actual) |> toEqual(expected);
      });
    });
    describe("with recursion", () => {
      open Expect;
      test("empty string", () => {
        let expected = "";
        let actual = Reverse_String.recursion("");
        expect(actual) |> toEqual(expected);
      });
      test("a word", () => {
        let expected = "abbott";
        let actual = Reverse_String.recursion("ttobba");
        expect(actual) |> toEqual(expected);
      });
      test("a capitalized word", () => {
        let expected = "olletsoC dna";
        let actual = Reverse_String.recursion("and Costello");
        expect(actual) |> toEqual(expected);
      });
      test("a sentence with punctuation", () => {
        let expected = "!snaidemoc taerg ereW";
        let actual = Reverse_String.recursion("Were great comedians!");
        expect(actual) |> toEqual(expected);
      });
      test("a palindrome", () => {
        let expected = "Acrobats stab orca";
        let actual = Reverse_String.recursion("acro bats staborcA");
        expect(actual) |> toEqual(expected);
      });
    });
  });