# Unix C Primer Exercises

## Exercise 1 - Macro expansion
```
gcc -E macro.c
```

* Observe that all occurences of the macro are expanded inline by the C pre-processor

## Exercise 2 - Compiling
```
gcc -o age compile.c
```

* Observe that a linux executable is created with the `age` name

```
./age
```

* Observe that executing the binary produces no aparent result

## Exercise 3 - Exit code
```
gcc -o age compile.c
```

* Observe that a linux executable is created with the `age` name

```
./age
echo $?
```

* Observe that the shell special variable `?` returns the exit code form the last executable

On POSIX systems, the standard exit code for success is 0 and any number from 1 to 255 indicates an execution error

## Exercise 4 - Includes
```
gcc result.c
```

* Observe the failure in compilation due to unknown function add

```
gcc -E result_include.c
gcc result_include.c
```

* Observe the function declaration after macro pre-processor expansion
* Observe the failure in linking due to unknown reference to add


## Exercise 4 - Linking
Compile into binary file the add code
```
gcc -c add.c
```

Compile and link everything together:

```
gcc -o result result_include.c add.o
./result
echo $?
```

* Observe that we can now execute the `result` program and get the correct exit code.

## Exercise 6 - Standard IO
`stdio.h` is a file containing the declarations of the standard IO functions

Locate this file on the server and ispect it:

```
which stdio.h
less /usr/include/stdio.h
```

Use the C standard IO to print a hello world message to the screen

```
gcc -E stdio.c
```

* Observe the C pre-processor expanding standard IO code into our source code

Compile and execute the file:

```
gcc -o hello stdio.c 
./hello
echo $?
```

* Observe that we can now print to the screen
* Observe that the exit code is 0

# Exercie 7 - File Read
Compile and execute:
```
gcc -o read read.c
```
Inser a number of characters and press enter.

* Observe that if number of characters written by the user is smaller than the buffer size, those
  characters are simply printed into the console
* If the number of characters written by the user is bigger than the buffer size, the characters that do not fit into the buffer are passed on to the shell as a command to be executed, which will most likely fail

# Exercise 8 - File Write

# Exercise 9 - File Copy
