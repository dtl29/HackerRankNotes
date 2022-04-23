/*
Two players are playing a game of Tower Breakers! Player 1 always 
moves first, and both players always play optimally.The rules of the 
game are as follows:
    -Initially there are n towers.
    -Each tower is of height m.
    -The players move in alternating turns.
    -In each turn, a player can choose a tower of height  and reduce 
    its height to y, where 1<=y<x and y evenly divides x.
    -If the current player is unable to make a move, they lose the 
    game.
Given the values of n and m, determine which player will win. If the 
first player wins, return 1. Otherwise, return 2.
Example.
    n=2
    m=6
    There are 2 towers, each 6 units tall. Player 1 has a choice of 
    two moves:
        - remove 3 pieces from a tower to leave 3 as 6modulo3=0
        - remove  pieces to leave 
    Let Player 1 remove 3. Now the towers are 3 and 6 units tall.
    Player 2 matches the move. Now the towers are both 3 units tall.
    Now Player 1 has only one move.
    Player 1 removes 2 pieces leaving 1. Towers are 1 and 2 units tall.
    Player 2 matches again. Towers are both 1 unit tall.
    Player 1 has no move and loses. Return 2.
Function Description
    Complete the towerBreakers function in the editor below.
    towerBreakers has the following paramter(s):
        -int n: the number of towers
        -int m: the height of each tower
Returns
    int: the winner of the game
Input Format
    The first line contains a single integer t, the number of test 
    cases.
    Each of the next t lines describes a test case in the form of 2 
    space-separated integers, n and m.
Constraints
    1<=t<=100
    1<=n.m<=10^6
Sample Input
    STDIN   Function
    -----   --------
    2       t = 2
    2 2     n = 2, m = 2    
    1 4     n = 1, m = 4
Sample Output
    2
    1
Explanation
    We'll refer to player 1 as P1 and player 2 as P2
    In the first test case, P1 chooses one of the two towers and 
    reduces it to 1. Then P2 reduces the remaining tower to a height 
    of 1. As both towers now have height 1, P1 cannot make a move so 
    P2 is the winner.
    In the second test case, there is only one tower of height 4. P1 
    can reduce it to a height of either 1 or 2. P1 chooses 1 as both 
    players always choose optimally. Because P2 has no possible move, 
    P1 wins.
*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'towerBreakers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

int towerBreakers(int n, int m) {
      int towers = n; int height = m;
      
      // if height == 1, the game is immediately over
      //     => p.1 has no moves; p.2 wins
      // if towers are divisible by 2, 
      //     => 2 mimics p.1's moves; p.2 wins
      if (towers%2 == 0 || height == 1) return 2;
      
      // otherwise, if towers is odd, p.1 can 
      // take the first tower down to 1, effectively 
      // making themselves p.2 and the tower numbers even,
      // which means they are now in the position to mimic
      // the original p.2's moves for the remaining towers
      // and win the game
      //    => the original p.1 wins
      return 1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);

        int m = stoi(first_multiple_input[1]);

        int result = towerBreakers(n, m);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}