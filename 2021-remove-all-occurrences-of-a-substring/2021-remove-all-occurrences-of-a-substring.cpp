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
            res.push_back(ch); // res me ch ki balue push karo

            if (res.size() >=m) { // jab tak res ki value m ya m se badi nhi ho jaati tab tak
                     // res me value push krte jao agr jaise hi res ki m k equal
                     // ya bda ho jaye usko compare krwa do part k sath.
                bool match = true;

                for (int i = 0; i < m;++i) { // iss line hum compare kr rhe hai res ki value ko
                            // part k value k sath
                    if (res[res.size() - m + i] !=part[i]) { // ye line me me hum last 3 value of res ko
                                   // ek ek kar k part k value k sath compare
                                   // kar he hai .
                        match = false;
                        break;
                    }
                }

                if (match) { // agr match true rehha hai to hum res ka last 3 value jo part se match hua hai usko pop out kr lete hai
                    for (int i = 0; i < m; ++i)
                        res.pop_back();
                }
            }
        }

        return res;
    }
};
