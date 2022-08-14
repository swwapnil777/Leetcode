class MyHashSet {
public:
    vector<list<int>> m;
    int size = 1000;
    MyHashSet() {
        m.resize(size);
    }
    int hash(int key){
        return key % size;
    }
    list<int> ::iterator search(int key){
        int idx = hash(key);
        return find(m[idx].begin(),m[idx].end(),key);
        
    }
    void add(int key) {
        if(contains(key)) return;
        int idx = hash(key);
        m[idx].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key)) return;
        int idx = hash(key);
        m[idx].erase(search(key));
    }
    
    bool contains(int key) {
        int idx = hash(key);
        if(search(key)==m[idx].end()) return false;
        return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */