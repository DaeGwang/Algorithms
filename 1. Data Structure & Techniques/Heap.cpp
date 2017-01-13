struct heap{
    int size;
    int s[1000];
    heap(){
        size = 0;
    }
    void push(int n){
        s[++size] = n;
        int id=size;
        while(id/2>0){
            if(s[id/2] < s[id]){
                swap(s[id/2], s[id]);
                id=id/2;
            }
            else{
                break;
            }
        }
    }
    int pop(){
        int out = s[1];
        s[1] = s[size--];
        int id = 1;
        while(id*2 <= size){
            int index = id*2;
            if(index+1 <= size && s[index] < s[index+1]) index++;
            if(s[id] < s[index]){
                swap(s[id], s[index]);
                id = index;
            }
            else{
                break;
            }
        }
        return out;
    }
};
