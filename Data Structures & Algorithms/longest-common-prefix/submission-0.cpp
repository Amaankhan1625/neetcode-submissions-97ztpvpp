class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
    if (strs.empty()) return ""; // ✅ fix

      sort(strs.begin(),strs.end());
      string s = "";
      
      for(int i = 0; i < strs[0].length();i++)
      {
        char a = strs.front()[i];
        char b = strs.back()[i];

        if(a == b)
        {
            s = s + a;
        }
        else{
            break;
        }
      }

    return s;
    }
};