class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int>s;
    vector<int>v;


    for(int i=0;i<nums.size();i++){
        int rem =target-nums[i];
        if(s.find(rem)!=s.end()){
            v.push_back(s[rem]);
            v.push_back(i);
            return v;
        }
        s[nums[i]]=i;
      }  
    return v;
    }
};