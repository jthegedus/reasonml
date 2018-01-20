open Jest;

open Expect;

let () =
  describe("RNA Transcription", () => {
    describe("Part 1 - chars with toRnaFromChar()", () => {
      test("transcribe cytosine to guanine", () =>
        expect(Rna_Transcription.toRnaFromChar('C')) |> toEqual('G')
      );
      test("transcribes guanine to cytosine", () =>
        expect(Rna_Transcription.toRnaFromChar('G')) |> toEqual('C')
      );
      test("transcribes adenine to uracil", () =>
        expect(Rna_Transcription.toRnaFromChar('A')) |> toEqual('U')
      );
      test("transcribes thymine to adenine", () =>
        expect(Rna_Transcription.toRnaFromChar('T')) |> toEqual('A')
      );
    });
    describe("Part 2 - strings with toRnaFromString()", () => {
      test("transcribe cytosine to guanine", () =>
        expect(Rna_Transcription.toRnaFromString("C")) |> toEqual("G")
      );
      test("transcribes guanine to cytosine", () =>
        expect(Rna_Transcription.toRnaFromString("G")) |> toEqual("C")
      );
      test("transcribes adenine to uracil", () =>
        expect(Rna_Transcription.toRnaFromString("A")) |> toEqual("U")
      );
      test("transcribes thymine to adenine", () =>
        expect(Rna_Transcription.toRnaFromString("T")) |> toEqual("A")
      );
      test("transcribes all dna nucleotides to their rna complements", () =>
        expect(Rna_Transcription.toRnaFromString("ACGTGGTCTTAA"))
        |> toEqual("UGCACCAGAAUU")
      );
    });
    describe("Part 3 - invalid data with validRna()", () => {
      test("correctly handles completely invalid input", () =>
        expect(Rna_Transcription.validRna("XXX")) |> toEqual(false)
      );
      test("correctly handles partially invalid input", () =>
        expect(Rna_Transcription.validRna("ACGTXXXCTTAA")) |> toEqual(false)
      );
    });
    describe("Part 4 - putting it all together with toRna()", () => {
      test("transcribes thymine to adenine", () =>
        expect(Rna_Transcription.toRna("T")) |> toEqual("A")
      );
      test("transcribes all dna nucleotides to their rna complements", () =>
        expect(Rna_Transcription.toRna("ACGTGGTCTTAA"))
        |> toEqual("UGCACCAGAAUU")
      );
      test("correctly handles invalid input", () =>
        expect(Rna_Transcription.toRna("Z")) |> toEqual("Invalid input")
      );
      test("correctly handles partially invalid input", () =>
        expect(Rna_Transcription.toRna("ACGTXXXCTTAA"))
        |> toEqual("Invalid input")
      );
    });
  });