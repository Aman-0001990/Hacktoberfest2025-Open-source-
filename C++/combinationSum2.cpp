class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>current;
        vector<vector<int>>result;
        solve(nums,target,current,result,0);
        return result;
    }
    void solve(vector<int>&nums,int target,vector<int>&current,vector<vector<int>>&result,int j){

if(target==0){
    result.push_back(current);
}
for(int i=j;i<nums.size();i++){
    if(i>j&&nums[i]==nums[i-1])continue;
    if(nums[i]>target)break;
    current.push_back(nums[i]);
    solve(nums,target-nums[i],current,result,i+1);
    current.pop_back();
}
    }
};
