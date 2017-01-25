class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if(s.length()<words.size()*words[0].size())
        return result;
        unordered_map<string,int> hash;
        for(int i=0;i<words.size();i++)
        hash[words[i]]++;
        for(int i=0;i<=s.length()-words.size()*words[0].size();i++)
        { string str=s.substr(i,words.size()*words[0].length());
         if(issubstring(str,words,hash))
         result.push_back(i);
        }
        return result;
    }
    bool issubstring(string str,vector<string>words,unordered_map<string,int> hash)
    {  unordered_map<string,int> hashcur;
        for(int i=0;i<words.size();i++)
        {string subs=str.substr(i*words[0].size(),words[0].size());

        if(hash.count(subs))//鸽巢原理
        {hashcur[subs]++;
         if(hashcur[subs]>hash[subs])
         return false;
        }
        else return false;
        }
        return true;
    }
};
