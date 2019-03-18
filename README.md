# ✂ cpptrim
Simple trim function library for C++ strings (removes leading and trailing
whitespace from strings).
Include the .h or copy the function to your source.

## How to install
Copy `cpptrim.h` to your project folder and add `include "cpptrim.h"` or
directly copy the functions from `cpptrim.h` to your own project source file(s).

## How to use
+ `cpptrim::trim(yourString)` - trim leading and trailing space from `yourString`.
+ `cpptrim::trim_left(yourString)` - trim leading space from `yourString`.
+ `cpptrim::trim_tright(yourString)` - trim trailing space from `yourString`.

For more information check `example.cpp` included in the `example` directory.
