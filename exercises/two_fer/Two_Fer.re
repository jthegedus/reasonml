let twoFer = (~name: option(string)=?, ()) : string =>
  switch name {
  | None => "One for you, one for me."
  | Some(a) => "One for " ++ a ++ ", one for me."
  };