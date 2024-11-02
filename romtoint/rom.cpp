class Solution {
public:
    int romanToInt(string s) {
         unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int total = 0;
        
        for (int i = 0; i < s.size(); i++) {
            int currentVal = romanValues[s[i]];
            
            if (i + 1 < s.size() && currentVal < romanValues[s[i + 1]]) {
                // Subtract if current symbol is smaller than the next symbol
                total -= currentVal;
            } else {
                // Otherwise, add the current value
                total += currentVal;
            }
        }
        
        return total;
    }
};