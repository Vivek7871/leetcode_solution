// class Solution {
// public:
  
//     string removeOccurrences(string s, string part) {
        
//         while(s.find(part)!=string::npos){
//             s.erase(s.find(part),part.length());
//         }
//         return s;
//     }
// };
class Solution {
public:
    string removeOccurrences(string s, string part) {
        string res = "";
        int m = part.length();

        for (char ch : s) {
            res.push_back(ch);  // Step 1

            if (res.size() >= m) {  // Step 2
                bool match = true;

                for (int i = 0; i < m; ++i) {  // Step 3
                    if (res[res.size() - m + i] != part[i]) {
                        match = false;
                        break;
                    }
                }

                if (match) {  // Step 4
                    for (int i = 0; i < m; ++i)
                        res.pop_back();
                }
            }
        }

        return res;
    }
};
