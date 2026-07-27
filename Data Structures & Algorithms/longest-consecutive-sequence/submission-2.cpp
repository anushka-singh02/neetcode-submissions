class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            int cnt =1;int k =1;
            for(int j =i+1;j<n;j++){
                if(nums[j]-k==nums[i]) {cnt++;
                k++;}
            }
            maxi = max(maxi , cnt);

        }
        return maxi;
    }
};
