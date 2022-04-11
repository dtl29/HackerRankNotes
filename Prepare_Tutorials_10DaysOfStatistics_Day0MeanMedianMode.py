#Problem
"""
Objective
In this challenge, we practice calculating the mean, median, and
mode. Check out the Tutorial* tab for learning materials and an
instructional video!
* https://www.hackerrank.com/challenges/s10-basic-statistics/tutorial *
Task
    Given an array, X, of N integers, calculate and print the
    respective mean, median, and mode on separate lines. If your
    array contains more than one modal value, choose the
    numerically smallest one.
    Note: Other than the modal value (which will always be an
    integer), your answers should be in decimal form, rounded to
    a scale of 1 decimal place (i.e., 12.3, 7.0 format).
Example
    N=6
    X=[1,2,3,4,5]
    The mean is 20/6 = 3.3.
    The median is 3+4/2 = 3.5.
    The mode is 5 because 5 occurs most frequently.
Input Format
    The first line contains an integer, N, the number of
    elements in the array.
    The second line contains N space-separated integers that
    describe the array's elements.
Constraints
    10<=N<=2500
    0<x[i]<=10^5, where x[i] is the ith element of the array.
Output Format
    Print 3 lines of output in the following order:
    1.Print the mean on the first line to a scale of 1 decimal
    place (i.e., , ).
    2.Print the median on a new line, to a scale of 1 decimal
    place (i.e., , ).
    3.Print the mode on a new line. If more than one such value      exists, print the numerically smallest one.
Sample Input
    10
    64630 11735 14216 99233 14470 4978 73429 38120 51135 67060
Sample Output
    43900.6
    44627.5
    4978
Explanation
Mean:
    We sum all N elements in the array, divide the sum by N, and
    print our result on a new line.
        mean=(x_0+x_1+...+x_n)/n
Median:
    To calculate the median, we need the elements of the array
    to be sorted in either non-increasing or non-decreasing
    order. The sorted array X={4978,11735,14216,14470,38120,
    51135,64630,67060}. We then average the two middle
    elements:
        median=(X_4+X_5)/2 = 89255/2 = 44627.5
    and print our result on a new line.
Mode:
    We can find the number of occurrences of all the elements in
    the array:
        4978 : 1
        11735 : 1
        14216 : 1
        14470 : 1
        38120 : 1
        51135 : 1
        64630 : 1
        67060 : 1
        73429 : 1
        99233 : 1
    Every number occurs once, making 1 the maximum number of
    occurrences for any number in X. Because we have multiple
    values to choose from, we want to select the smallest one,
    4978, and print it on a new line.
"""

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy
from scipy import stats
n = int(input())
x = list(map(int,input().split(' ')))
x = numpy.array(x)
print(x.mean())
print(numpy.median(x))
print(*stats.mode(x)[0])
