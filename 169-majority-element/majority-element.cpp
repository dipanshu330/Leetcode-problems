class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        int candidate;   // possible majority element
        int count = 0;   // vote count

        for(int i = 0; i < nums.size(); i++) {
            
            if(count == 0) {
                candidate = nums[i];  // choose new candidate
            }

            if(nums[i] == candidate) {
                count++;   // same element → increase vote
            } else {
                count--;   // different element → cancel vote
            }
        }

        return candidate;
   

    }
};