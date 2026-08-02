class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff;
        vector<int> result;
        unordered_map<int,int> mpp;
        mpp[nums.at(0)]=0;
        for(int i=1;i<nums.size();i++){
            diff=target-nums.at(i);
            auto it=mpp.find(diff);
        if(it!=mpp.end()){
            result.push_back(min(it->second,i));
            result.push_back(max(it->second,i));
            break;
        }
            
            else{
                mpp[nums.at(i)]=i;
            }
        }
        return result;
    }
};
