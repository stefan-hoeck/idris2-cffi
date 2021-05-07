module Fahr

%foreign "C:printFahr,libfahr"
printFahr : PrimIO ()

%foreign "C:printCelsius,libfahr"
printCelsius : PrimIO ()

main : IO ()
main = do primIO printFahr
          putStrLn ""
          primIO printCelsius
