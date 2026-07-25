class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto it:strs) ans+=to_string(it.size())+"*"+it;
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        int n=(int)s.size();
        while(i<n){
            int j=i;
            while(s[j]!='*')j++;
            int len=stoi(s.substr(i,j-i));
            string st=s.substr(j+1,len);
            ans.push_back(st);
            i=j+1+len;
        }
        return ans;
    }
};
