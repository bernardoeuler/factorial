# Factorial
This program calculates the factorial of **any** number. Yes, any number, if you can wait. This is because of the use of the GMP library (GNU Multiple Precision Arithmetic), which makes it possible to go beyond the limits of C in terms of integers representation.
The program runs very fast. Calculating in terms of **miliseconds** the factorial of 1, 2, 100, 500 or even 100.000! It can go beyond and calculate the factorial of bigger numbers, despite taking a bit longer to do that.

## How to download
Download the  [linux binary](https://github.com/bernardoeuler/factorial/releases/tag/v1.0.0) in the releases page and run it.
The binaries for Windows and MacOS aren't avaliable yet.

## How to compile
1. First, you have to download the [GMP library](https://gmplib.org/).
2. Clone this repository or download the file.
3. After that, just compile the source code linking to the GMP library.
    ```bash
    gcc -o factorial factorial.c -lgmp
    ```

## How to use
So, let's calculate some numbers. To run the program, you must provide a positive integer number as argument:

1. In Linux/Mac OS:
    ```bash
    ./factorial <number>
    ```
    For example:
    ```bash
    ./factorial 5
    # 120
    ```
    
    ```bash
    ./factorial 10
    # 3628800
    ```

2. In Windows:
    ```bash
    .\factorial.exe <number>
    ```
    For example:
    ```bash
    .\factorial.exe 5
    # 120
    ```
    
    ```bash
    .\factorial.exe 10
    # 3628800
    ```
