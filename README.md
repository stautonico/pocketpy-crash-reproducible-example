# pocketpy-crash-reproducible-example


In this repos default state, it doesn't setup the "global" instance of the variable

To cause the crash:
1. Comment out line 7 in "main.cpp"
2. Uncomment line 4 in "myobject.cpp"
3. mkdir build && cd build
4. cmake ..
5. make
6. ./test
