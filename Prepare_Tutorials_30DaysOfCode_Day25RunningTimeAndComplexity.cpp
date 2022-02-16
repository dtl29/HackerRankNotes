/*Problem*/
/**
Objective
  Today we will learn about running time, also known as time complexity. Check out the Tutorial tab for learning
  materials and an instructional video.
  * https://www.hackerrank.com/challenges/30-running-time-and-complexity/tutorial *
Task
  A prime is a natural number greater than 1 that has no positive divisors other than and itself. Given a number,
  n, determine and print whether it is Prime or Not Prime.
  Note: If possible, try to come up with a O(sqrt(n)) primality algorithm, or see what sort of optimizations you
  come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code.
Input Format
  The first line contains an integer, T, the number of test cases.
  Each of the T subsequent lines contains an integer, n, to be tested for primality.
Constraints
  1<=T<=30
  1<=n<=2X1=^9
Output Format
  For each test case, print whether n is Prime or Not Prime on a new line.
Sample Input
  3
  12
  5
  7
Sample Output
  Not prime
  Prime
  Prime
Explanation
  Test Case 0: n=12.
  12 is divisible by numbers other than 1 and itself (i.e.: 2, 3, 4, 6), so we print Not Prime on a new line.
  Test Case 1: n=5.
  5 is only divisible 1 and itself, so we print Prime on a new line.
  Test Case 2: n=7.
  7 is only divisible 1 and itself, so we print Prime on a new line.
**/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    else if(n == 2)
    {
        return true;
    }
    else if(n % 2 == 0)
    {
        return false;
    }
    else {
        //if i * i mod n is divisable so is i
        //*so we only need to check sqr(n) times
        for(int i = 3; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0;
    cin >> n;
    int t = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        if(isPrime(t))
        {
            cout << "Prime\n";
        }
        else
        {
            cout << "Not prime\n";
        }
    }

    return 0;
}
