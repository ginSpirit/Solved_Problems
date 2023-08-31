//Assiut University Training - Newcomers (Z) Binary Search
/*
Given 2 numbers N and Q, array A of N numbers and Q queries each one contains a number X.
For each query print a single line that contains "found" if the number X exists in array A
otherwise, print "not found". 
link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
*/
#include <bits/stdc++.h>
using namespace std;

void fast() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin.exceptions(cin.failbit);
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    fast();
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while(q--) {
        int x;
        cin >> x;
        if (binary_search(a.begin(), a.end(), x)) {
            cout << "found" << endl;
        }
        else {
            cout << "not found" << endl;
        }
    }
    return (EXIT_SUCCESS);
}