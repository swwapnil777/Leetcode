class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> map;
        for(auto &x:arr){
            map[x]++;
        }
        priority_queue<int,vector<int>> pq;
        for(auto &x:map){
           pq.push(x.second);
        }
        int size = 0;
        
        int n =arr.size();
        while(n>(int)arr.size()/2){
            int x = pq.top();
            size++;
            pq.pop();
            n = n-x; 
        }
      return size;
    }
};