class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = (int)arr.size();
        unordered_map<int,int> map;
        for(auto x:arr) map[x]++;
        for(int i=0;i<n;i++){
            int k = arr[i]*2;
           if(k==0) map[k]--;
            if(arr[i]==0 && map[0]>=1){
                return true;
            }
            if(map[k]>=1) return true;
        }
        return false;
    }
};