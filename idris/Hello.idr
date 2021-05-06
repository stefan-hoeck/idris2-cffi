module Hello

-- FFI call to `printHello` in `c/hello.c`.
%foreign "C:printHello,libhello"
hello : PrimIO ()

-- All commands below should be run from the project's root dir.
-- 
-- In order to run this, first build `c/hello.c`:
-- `cc -shared c/hello.c -o libhello.so`.
--
-- Now load this source file into an Idris2 session
-- `rlwrap idris2 --source-dir idris idris/Hello.idr`.
-- and execute main:
-- `Hello> :exec main`.
--
-- In order to build and run:
-- `idris2 --source-dir idris -o hello idris/Hello.idr`
-- Now, export system library path to current dir
-- `export LD_LIBRARY_PATH=/home/me/idris/cffi`
-- and run the program:
-- `build/exec/hello`.
main : IO ()
main = primIO hello
