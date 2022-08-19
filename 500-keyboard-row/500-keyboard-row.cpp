class Solution {
public:
      unordered_set<char> set1= {'q', 'w', 'e', 'r', 't', 'y','u', 'i', 'o', 'p','Q','W','E','R','T','Y','U','I','P','O'};
      unordered_set<char> set2= {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l' ,'A','S','D','F','G','H','J','K','L'}; 
      unordered_set<char> set3= { 'z', 'x', 'c', 'v', 'b' ,'n', 'm','Z','X','C','V','B','N','M'};   
    bool helper(string &temp){
            char ch = temp[0];
            if(set1.find(ch)!=set1.end()){
                for(int i=1;i<temp.size(); ++i){
                    if(set1.find(temp[i])==set1.end()){
                        return false;
                    }
                   
                }
            }
           else if(set2.find(ch)!=set2.end()){
                for(int i=1;i<temp.size(); ++i){
                    if(set2.find(temp[i])==set2.end()){
                        return false;
                    }    
                }
            }
           else if(set3.find(ch)!=set3.end()){
                for(int i=1;i<temp.size(); ++i){
                    if(set3.find(temp[i])==set3.end()){
                        return false;
                    }
                    
                }
            }
         return true;
       
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for(auto &x:words){
            if(helper(x)) ans.push_back(x);
        }
        return ans;
    
        
    }
};