#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> dist(n, n); // initialize with large value

        // Left to right pass
        int pos = -n; // set far enough
        for (int i = 0; i < n; i++) {
            if (s[i] == c) pos = i;
            dist[i] = i - pos;
        }

        // Right to left pass
        pos = 2 * n; // set far enough
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == c) pos = i;
            dist[i] = min(dist[i], pos - i);
        }

        return dist;
    }
};
