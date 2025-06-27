class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int x = 0, y = 0;
        for (const string& cmd : commands) {
            switch (cmd[0]) {
                case 'U': x--; break;
                case 'D': x++; break;
                case 'L': y--; break;
                case 'R': y++; break;
            }
        }
        return x * n + y;
    }
};
