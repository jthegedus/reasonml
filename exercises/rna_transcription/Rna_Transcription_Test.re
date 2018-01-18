open Jest;

let () =
  describe("RNA Transcription", () => {
    open Expect;
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
  });