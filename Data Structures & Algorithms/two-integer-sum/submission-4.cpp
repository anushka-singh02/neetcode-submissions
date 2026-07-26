class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, vector<int>> mpp;
        for(int k =0;k<n;k++){
           mpp[nums[k]].push_back(k);
            
        }
      vector<int> ans;
        sort(nums.begin(),nums.end());
        int i =0;int j = n-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum<target) i++;
            else if(sum>target) j--;
            else{
                if(nums[i]==nums[j]){
                    ans.push_back(mpp[nums[i]][0]);
                    ans.push_back(mpp[nums[i]][1]);
                   
                }
                else{
                    ans.push_back(mpp[nums[i]][0]);
                    ans.push_back(mpp[nums[j]][0]);
                    
                }
                break;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
