open Jest;

let () =
  describe("Hello_World", () => {
    open Expect;
    test("test string contents", () =>
      expect(Hello_World.output) |> toEqual("Hello, BuckleScript")
    );
    test("console.log was called", () =>
      expect(Hello_World.log) |> toEqual(Js.log("Hello, BuckleScript"))
    );
  });