struct FenwickTree{
    vector<int> tree;
    FenwickTree(int n) : tree(n+1){}
    int sum(int pos){
        int ans = 0;
        while(pos > 0){
            ans += tree[pos];
            pos &= (pos - 1);
        }
        return ret;
    }
    void add(int pos, int val){
        while(pos < tree.size()){
            tree[pos] += val;
            pos += (pos & -pos);
        }
    }
};