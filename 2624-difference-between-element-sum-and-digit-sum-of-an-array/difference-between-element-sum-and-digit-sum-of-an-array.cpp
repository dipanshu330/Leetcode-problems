class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0, dig=0,r;
        
        for(int i=0; i<n; i++)
        {
            sum=sum+nums[i];

            while(nums[i]>0)
            {
                r=nums[i]%10;
                nums[i]=nums[i]/10;
                dig=dig+r;
            }
        }

        return sum-dig;
    }
};