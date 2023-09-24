/* https://codeforces.com/problemset/problem/474/A
  Codeforces Round 271 (Div. 2) -> A.Keyboard
Our good friend Mole is trying to code a big message. He is typing on an unusual keyboard with characters arranged in following way:
qwertyuiop
asdfghjkl;
zxcvbnm,./
Unfortunately Mole is blind, so sometimes it is problem for him to put his hands accurately. He accidentally moved both his hands with 
one position to the left or to the right. That means that now he presses not a button he wants, but one neighboring button (left or right, as specified in input).
We have a sequence of characters he has typed and we want to find the original message.
First line of the input contains one letter describing direction of shifting ('L' or 'R' respectively for left or right). */

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long long int int64;
#define input(v) for(auto &i : v) cin >> i
#define line(x) getline(cin, x)
#define endl "\n"
#define exit exit(EXIT_SUCCESS);
#define revArray(x, n) reverse(x, x+n);
#define all(x)  x.begin(), x.end()

int main() {
    cin.tie(nullptr)->sync_with_stdio(false); //fast IO
    char c;
    string line;
    cin >> c >> line;
    string keyboard[] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    int shift = (c=='L')? 1: -1;
    for (char ch : line) {
        for (int i=0; i<3; i++) {
            size_t j = keyboard[i].find(ch);
            if (j!=string :: npos) {
                j = (j+shift+keyboard[i].size() % keyboard[i].size());
                cout << keyboard[i][j];
                break;
            }
        }
    }
    cout << endl;
    return (EXIT_SUCCESS); 
}
