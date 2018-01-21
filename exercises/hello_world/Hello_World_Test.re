open Jest;

open Expect;

let () =
  describe("Hello_World tests", () => {
    test("test string contents", () =>
      expect(Hello_World.output) |> toEqual("Hello, BuckleScript")
    );
    test("console.log was called", () =>
      expect(Hello_World.log) |> toEqual(Js.log("Hello, BuckleScript"))
    );
  });