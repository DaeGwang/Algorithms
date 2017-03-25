struct Node{
    Node* children[26];
    int value;
    void insert (char *key){
        int num = *key-'a';
        if(*key==0){
            value = 1;
        }
        else{
            if(children[num]==NULL){
                children[num] = new Node();
            }
            children[num]->insert(key+1);
        }
    }
}