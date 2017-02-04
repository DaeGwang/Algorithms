#include <stdio.h>
#include <cstdio>

int a[10000];
int tree[40000];

int init(int node, int l, int r){
    if(l==r) return tree[node] = a[l];
    int mid = (l+r)/2;
    return tree[node] = init(node*2, l, mid) + init(node*2+1, mid+1, r);
}

int sum(int node, int l, int r, int x, int y){
    if(x>r || l>y) return 0;
    if(x<=l && r<=y) return tree[node];
    int mid = (l+r)/2;
    return sum(node*2, l, mid, x, y) + sum(node*2+1, mid+1, r, x, y);
}

void update(int node, int l, int r, int index, int num){
    if(index < l || index > r) return;
    int diff = num - a[index];
    tree[node] = tree[node] + diff;
    int mid = (l+r)/2;
    if(l!=r){
        update(node*2, l, mid, index, num);
        update(node*2+1, mid+1, r, index, num);
    }
    else{
        a[index] = num;
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    int n, type, num, x, y;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        a[i] = i+1;
    }
    init(1, 0, n-1);
    scanf("%d", &num);
    for(int i=0; i<num; i++){
        scanf("%d %d %d", &type, &x, &y);
        if(type==0){
            update(1, 0, n-1, x-1, y);
        }
        else{
            int ans = sum(1, 0, n-1, x-1, y-1);
            printf("%d\n", ans);
        }
    }
    return 0;
}
