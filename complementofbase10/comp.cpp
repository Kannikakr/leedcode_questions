class Solution {
public:
    int bitwiseComplement(int n) {
        // Special case
        if (n == 0) return 1;

        // Calculate the mask
        int mask = 1;
        while (mask < n) {
            mask = (mask << 1) | 1;
        }

        // XOR n with mask to get the complement
        return n ^ mask;
    }
};
