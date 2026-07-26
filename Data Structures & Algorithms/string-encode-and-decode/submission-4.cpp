class Solution {
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string res = "";
        for (string s : strs) {
            res += to_string(s.size()) + "#" + s;
        }
        return res;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            // Find the position of the '#' delimiter
            while (s[j] != '#') {
                j++;
            }
            // Parse the length of the string
            int length = stoi(s.substr(i, j - i));
            // Extract the string of that exact length
            string str = s.substr(j + 1, length);
            res.push_back(str);
            // Move pointer past the current encoded word
            i = j + 1 + length;
        }
        return res;
    }
};