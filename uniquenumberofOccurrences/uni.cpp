class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::unordered_map<int, int> frequencyMap;
        
        // Count the occurrences of each element
        for (int num : arr) {
            frequencyMap[num]++;
        }
        
        // Check for unique frequencies
        std::unordered_set<int> uniqueFrequencies;
        for (const auto& entry : frequencyMap) {
            // Insert frequency count into the set
            uniqueFrequencies.insert(entry.second);
        }
        
        // If the size of the set is the same as the map, occurrences are unique
        return uniqueFrequencies.size() == frequencyMap.size();
    }
};