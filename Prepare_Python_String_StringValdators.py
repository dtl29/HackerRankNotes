#problem
"""
Python has built-in string validation methods for basic data. It can check if a string is composed of alphabetical characters, alphanumeric characters, digits, etc.

str.isalnum()
This method checks if all the characters of a string are alphanumeric (a-z, A-Z and 0-9).

>>> print 'ab123'.isalnum()
True
>>> print 'ab123#'.isalnum()
False
str.isalpha()
This method checks if all the characters of a string are alphabetical (a-z and A-Z).

>>> print 'abcD'.isalpha()
True
>>> print 'abcd1'.isalpha()
False
str.isdigit()
This method checks if all the characters of a string are digits (0-9).

>>> print '1234'.isdigit()
True
>>> print '123edsd'.isdigit()
False
str.islower()
This method checks if all the characters of a string are lowercase characters (a-z).

>>> print 'abcd123#'.islower()
True
>>> print 'Abcd123#'.islower()
False
str.isupper()
This method checks if all the characters of a string are uppercase characters (A-Z).

>>> print 'ABCD123#'.isupper()
True
>>> print 'Abcd123#'.isupper()
False
Task

You are given a string S.
Your task is to find out if the string S contains: alphanumeric characters, alphabetical characters, digits, lowercase and uppercase characters.

Input Format

A single line containing a string S.

Constraints
0<len(S)<1000

Output Format

In the first line, print True if S has any alphanumeric characters. Otherwise, print False.
In the second line, print True if S has any alphabetical characters. Otherwise, print False.
In the third line, print True if S has any digits. Otherwise, print False.
In the fourth line, print True if S has any lowercase characters. Otherwise, print False.
In the fifth line, print True if S has any uppercase characters. Otherwise, print False.

Sample Input

qA2
Sample Output

True
True
True
True
True
"""
def verify(s):
    isdi = False
    isal = False
    islo = False
    isup = False
    isap = False
    for j in range(0, len(s)):
        if(s[j].isalnum()):
            isal = True
        if(s[j].isdigit()):
            isdi = True
        if(s[j].islower()):
            islo = True
        if(s[j].isupper()):
            isup = True
        if(s[j].isalpha()):
            isap = True
    if(isal):
        print("True")
    else:
        print("False")
    if(isap):
        print("True")
    else:
        print("False")
    if(isdi):
        print("True")
    else:
        print("False")
    if(islo):
        print("True")
    else:
        print("False")
    if(isup):
        print("True")
    else:
        print("False")

if __name__ == '__main__':
    s = raw_input()
    verify(s)