# Off-by-One Error in C++ Vector Iteration

This repository demonstrates a common off-by-one error that occurs when iterating over a `std::vector` in C++ using an index-based loop. The error arises from accessing an element beyond the valid index range of the vector.

## Problem

The provided `bug.cpp` file contains a loop that iterates from index 0 up to and including `vec.size()`. This is incorrect because the valid indices of a vector range from 0 to `vec.size() - 1`. Accessing `vec[vec.size()]` leads to undefined behavior, typically a crash or unexpected results.

## Solution

The `bugSolution.cpp` file shows the corrected code, which iterates from 0 to `vec.size() - 1` to avoid the off-by-one error.  It also demonstrates the use of iterators for a more safer and idiomatic approach.