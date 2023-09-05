#include <algorithm>
#include <deque>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef long long ll;
#define endl "\n"
void fast() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin.exceptions(cin.failbit);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;
    vector<vector<int>> t(n);
    t[0].push_back(1);
    for (int i=1; i<n; i++) {
        t[i].push_back(1);
        for (int j=1; j<i; j++) {
            t[i].push_back(t[i-1][j-1]+t[i-1][j]);
        }
        t[i].push_back(1);   
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<t[i].size(); j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return (EXIT_SUCCESS);
}
