//Given a string S. For each word in S. Reverse its letters then print it.
#include <bits/stdc++.h>
#include <initializer_list>
#include <scoped_allocator>
#include <system_error>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set> 
using namespace std;
typedef long long ll;
#define input(v) for(auto &i : v) cin >> i
#define line(x) getline(cin, x)
#define endl "\n"
#define exit exit(EXIT_SUCCESS);
#define revArray(x, n) reverse(x, x+n);
#define all(x)  x.begin(), x.end()

string spaceRemove(string &s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    return s;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;
    line(s);
    istringstream iss(s);
    string revWord;
    bool f = true;
    while(iss>>revWord) {
        reverse(all(revWord));
        if (!f) {
            cout << " ";
        }
        cout << revWord;
        f = false;
    }
    cout << endl;

    return (EXIT_SUCCESS); 
}
