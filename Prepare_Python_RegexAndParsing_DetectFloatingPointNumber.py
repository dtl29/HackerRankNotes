#Problem
"""
Check Tutorial* tab to know how to to solve.
* https://www.hackerrank.com/challenges/introduction-to-regex/tutorial *
You are given a string N.
Your task is to verify that N is a floating point number.
In this task, a valid float number must satisfy all of the following requirements:
    > Number can start with +, - or . symbol.
        For example:
            ✔
            +4.50
            ✔
            -1.0
            ✔
            .5
            ✔
            -.7
            ✔
            +.4
            ✖
            -+4.5
    > Number must contain at least  decimal value.
        For example:
            ✖
            12.
            ✔
            12.0
    > Number must have exactly one . symbol.
    > Number must not give any exceptions when converted using
    float(N)
Input Format
    The first line contains an integer T, the number of test
    cases.
    The next T line(s) contains a string N.
Constraints
    0<T<10
Output Format
    Output True or False for each test case.
Sample Input 0
    4
    4.0O0
    -1.00
    +4.54
    SomeRandomStuff
Sample Output 0
    False
    True
    True
    False
Explanation 0
    4.0o0: O is not a digit.
    -1.00: is valid.
    +4.54: is valid.
    SomeRandomStuff: is not a number.
"""

# Enter your code here. Read input from STDIN. Print output to STDOUT
def isfloat(n):
    try:
        if(n == '0'):
            return False
        float(n)
        return True
    except ValueError:
        return False
t = int(input())
for i in range(0, t):
    print(isfloat(input()))
