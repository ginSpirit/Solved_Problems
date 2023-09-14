/*
Given a string S. Determine how many times does each letter occurred in S.
*/
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
#define rev(x) reverse(x.begin(), x.end())
#define revArray(x, n) reverse(x, x+n);


void fast() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin.exceptions(cin.failbit);
}
string spaceRemove(string &s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    return s;
}
bool goodBad(string s) {
    for (int i=0; i<s.length(); i++) {
        if ((s.substr(i, 3)=="101")||(s.substr(i,3)=="010")) {
            return true;
            break;
        }
    }
    return false;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;
    cin >> s;
    map<char, int>lettercount;
    for (char c : s) {
        lettercount[c]++;
    }
    for (auto i : lettercount) {
        cout << i.first <<" : "<<i.second << endl;
    }
    return (EXIT_SUCCESS); 
}
