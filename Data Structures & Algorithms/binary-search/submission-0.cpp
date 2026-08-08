class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low;
        int high;
        int mid;
        low=0;
        int sum=0;
        int n=nums.size();
        high=n-1;
        while(low<=high){
            mid=(low+high)/2;
            if(target==nums.at(mid)){
                sum=mid;
                break;
            }
            else if(target>nums.at(mid)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(low<=high){
            return sum;
        }
        else return -1;
    }
};
