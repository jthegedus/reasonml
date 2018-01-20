open Jest;

open Expect;

let () =
  describe("Pangram", () => {
    test("empty sentence", () =>
      expect(Pangram.isPangram("")) |> toBe(false)
    );
    test("pangram as lowercase only", () =>
      expect(Pangram.isPangram("the quick brown fox jumps over the lazy dog"))
      |> toBe(true)
    );
    test("missing character 'x'", () =>
      expect(
        Pangram.isPangram(
          "a quick movement of the enemy will jeopardize five gunboats"
        )
      )
      |> toBe(false)
    );
    test("missing character 'x'", () =>
      expect(Pangram.isPangram("the quick brown fish jumps over the lazy dog"))
      |> toBe(false)
    );
    test("with underscores", () =>
      expect(Pangram.isPangram("the_quick_brown_fox_jumps_over_the_lazy_dog"))
      |> toBe(true)
    );
    test("with numbers", () =>
      expect(
        Pangram.isPangram("the 1 quick brown fox jumps over the 2 lazy dogs")
      )
      |> toBe(true)
    );
    test("missing letter replaced with numbers", () =>
      expect(Pangram.isPangram("7h3 qu1ck brown fox jumps ov3r 7h3 lazy dog"))
      |> toBe(false)
    );
    test("mixed case and punctuation", () =>
      expect(Pangram.isPangram("'Five quacking Zephyrs jolt my wax bed.'"))
      |> toBe(true)
    );
    test("non-ascii characters", () =>
      expect(
        Pangram.isPangram(
          "Victor jagt zw\195\182lf Boxk\195\164mpfer quer \195\188ber den gro\195\159en Sylter Deich."
        )
      )
      |> toBe(true)
    );
  });