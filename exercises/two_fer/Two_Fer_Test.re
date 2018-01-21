open Jest;

open ExpectJs;

let () =
  describe("Two Fer", () => {
    test("gives one to you if no params", () =>
      expect(Two_Fer.twoFer()) |> toEqual("One for you, one for me.")
    );
    test("gives one to Alice if param='Alice'", () =>
      expect(Two_Fer.twoFer(~name="Alice", ()))
      |> toEqual("One for Alice, one for me.")
    );
    test("gives one to Bob if param='Bob'", () =>
      expect(Two_Fer.twoFer(~name="Bob", ()))
      |> toEqual("One for Bob, one for me.")
    );
  });