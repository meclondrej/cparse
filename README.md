# cparse
A parsing utility library written in C

## Usage

There is only one conversion function for each header file, so include them seperately, e.g.: `#include "cparse/convs/strtodouble.h"`.
This makes the total import size as small as possible.

## Library size

The library is extremely small, not importing any additional libraries, not even `stdlib.h`.
Only core C functionality is used, which makes the library suitable for places where system libraries are not available, both by size and compatibility.
