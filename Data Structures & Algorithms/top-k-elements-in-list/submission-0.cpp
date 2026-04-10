class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      
      //create a map where frequency of array with element are stored 
      unordered_map<int,int>mp;
        for(int x : nums)
        {
          mp[x]++;
        }
 

        //min heap(frequency ,element )  ->  this way heap is reated on the frequency not on the basis of element
        priority_queue<pair<int,int>> pq;
        for(auto& it : mp)
        {
          pq.push({it.second, it.first}); // (freq, element)  // (frequency, element)
        }
     

      // Step 3: extract elements
        vector<int> ans;
        while(k>0) {
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans ;
    }
};
