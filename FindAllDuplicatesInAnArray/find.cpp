class Solution {
public:
    std::vector<int> findDuplicates(std::vector<int>& nums) {
        std::vector<int> duplicates;

        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;  

            if (nums[index] < 0) {
                duplicates.push_back(index + 1);
            } else {
                nums[index] = -nums[index];
            }
        }
        
        return duplicates;
    }
};
