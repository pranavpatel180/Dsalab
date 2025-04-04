class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }
        priority_queue<pair<int, int>> pq;
        for (auto& entry : freqMap) {
            pq.push({entry.second, entry.first});
        }
        vector<int> result;
        while (k-- > 0 && !pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }