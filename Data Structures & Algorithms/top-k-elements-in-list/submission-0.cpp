class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int  i =0;i<n;i++){
            mpp[nums[i]]++; // freq stored
        }
        vector<pair<int,int>> ans;
        for(auto it: mpp){
            ans.push_back({it.second,it.first});
        }
        sort(ans.rbegin(),ans.rend());

        vector<int> res;
        for(int i =0;i<k;i++){
            res.push_back(ans[i].second);
        }
        return res;
    }
};
