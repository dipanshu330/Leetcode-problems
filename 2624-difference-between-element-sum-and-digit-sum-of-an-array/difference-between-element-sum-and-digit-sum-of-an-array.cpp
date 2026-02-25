class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0, dig=0;
        
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            
            int temp=nums[i];
            while(temp>0)
            {
               dig+=temp%10;
                temp/=10;
            }
        }

        return sum-dig;
    }
};