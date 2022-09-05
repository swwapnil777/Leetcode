class Node{
	public:
		bool end;
		Node *next[26];
		Node(){
			end = false;
			for(int i=0;i<26;++i){
				next[i] = NULL;
			}
		}

};

class Trie {
public:
    Node *trie;
    Trie() {
        trie = new Node();
    }
    void insert(string word) {
         int i = 0;
          Node *it = trie;
          while(i<word.size()){
          	  if(it->next[word[i]-'a']==NULL){
                 it->next[word[i]-'a'] = new Node;
          	  }
          	  it = it->next[word[i]-'a']; 
          	  i++;
          }
          it->end = true;
    }
    
    bool search(string word) {
        int i=0;
		Node *it = trie;
		while(i<word.size()){
			if(it->next[word[i]-'a'] ==NULL){
             return false;
			}
			it = it->next[word[i]-'a'];	
			i++;
		}
		return it->end;
    }
    
    bool startsWith(string prefix) {
        Node* cur = trie;
     for(char c: prefix){
         if(cur->next[c-'a']==NULL)return false;
         cur=cur->next[c-'a'];
    }
    return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */