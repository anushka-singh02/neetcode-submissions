class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

    vector<int> res;
    int n = nums.size();
    for(int i =0;i<n;i++){
        int prod = 1;
        for(int j =0;j<n;j++){
            if(i!=j) {prod = prod*nums[j];}
        }
        res.push_back(prod);
    }
    return res;

    }
};
