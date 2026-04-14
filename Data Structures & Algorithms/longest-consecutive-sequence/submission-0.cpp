class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size() ;
         if(n == 0 || n==1) return n ;

         sort(nums.begin(),nums.end());
         int max_len = 1;
         int len = 1;

         for(int i = 0 ; i < n-1 ; i++)
         {
          if(nums[i] == nums[i+1])
          {
            continue ;
          }
           if(nums[i] == nums[i+1]-1)
           {
             len++;
             max_len = max(max_len,len);
           }
           else{
            len = 1;
           }
         }
         return max_len ;
    }
};
