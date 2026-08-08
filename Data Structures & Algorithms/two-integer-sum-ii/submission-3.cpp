class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int count=0;
        vector<int> v;
        int low;
        int high;
        int mid;
        int tar;
        low=0;
        high=numbers.size()-1;
        for(int i=0;i<numbers.size();i++){
            low=0;
            high=numbers.size()-1;
            if(count==7){
                break;
            }
            tar=target-numbers.at(i);            
        while(low<=high){
            mid=(low+high)/2;
            if(tar==numbers.at(mid) && mid !=i){
                v.push_back(min(i,mid)+1);
                v.push_back(max(i,mid)+1);
                count=7;
                break;
            }
           else if(tar>numbers.at(mid)){
            low=mid+1;
           }
           else
           high=mid-1;
        }
        }
        

        return v;
    }
};
