class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int max=0;
        int count=0;
        int n=nums.size();
        unordered_map<int , int> mapp;
        mapp[0]=1;
        for(int i=0;i<n;i++){
            max = max + nums[i];
             
           int rem=(max %k + k) % k;  // to deal wuth negative number

        //    if(mapp.find(rem) != mapp.end()){
        //     count += mapp[rem];
        //    }
            count += mapp[rem];
            mapp[rem]++;

        }
        return count;
    }
};