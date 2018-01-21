open Jest;

open ExpectJs;

let () = {
  describe("Leap year", () => {
    test("is not very common", () =>
      expect(Leap.isLeapYear(2015)) |> toBeFalsy
    );
    test("is introduced every 4 years to adjust about a day", () =>
      expect(Leap.isLeapYear(2016)) |> toBeTruthy
    );
    test("is skipped every 100 years to remove an extra day", () =>
      expect(Leap.isLeapYear(1900)) |> toBeFalsy
    );
    test("is reintroduced every 400 years to adjust another day", () =>
      expect(Leap.isLeapYear(2000)) |> toBeTruthy
    );
  });
  /* Thorough testing */
  describe("A leap year that", () => {
    open ExpectJs;
    test("is not a leap year", () =>
      expect(Leap.isLeapYear(1978)) |> toBeFalsy
    );
    test("is a common leap year", () =>
      expect(Leap.isLeapYear(1992)) |> toBeTruthy
    );
    test("is skipped every 100 years", () =>
      expect(Leap.isLeapYear(2100)) |> toBeFalsy
    );
    test("is reintroduced every 400 years", () =>
      expect(Leap.isLeapYear(2400)) |> toBeTruthy
    );
  });
};