class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int size = n/3;
        for(int i=0;i<n;i++) mp[nums[i]]++;
        vector<int> ans;
        for(auto &x : mp){
            if(x.second > size) ans.push_back(x.first);
        }
        return ans;
    }
};