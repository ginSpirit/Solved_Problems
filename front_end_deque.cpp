/*
You are given an array a of n integers, your task is to 
print the first (front) element then remove it, 
then print the last(end) element then remove it, 
and so on until the array becomes empty.
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
#define input(v) for(auto&& i : v) cin >> i
#define line(x) getline(cin, x)
#define endl "\n"

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    while(!a.empty()) {
        cout << a.front() << " ";
        a.erase(a.begin());
        if (a.empty()) {
            break;
        }
        cout << a.back() << " ";
        a.pop_back();
    }
    cout << endl;
    return (EXIT_SUCCESS); 
}
