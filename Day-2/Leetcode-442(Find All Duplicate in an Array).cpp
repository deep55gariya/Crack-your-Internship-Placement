class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<int> ans;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i] == nums[i+1])
        ans.push_back(nums[i]);
    }
    return ans;
    }

    ////////////////  METHOD -2 //////////////////////////////
       unordered_map<int, int> mapp;
        vector<int> ans;
    for(auto x: nums){
        mapp[x]++;
    }
     for(auto n : mapp)
     if(n.second > 1){
        ans.push_back(n.first);
     }
     return ans;
    }
};