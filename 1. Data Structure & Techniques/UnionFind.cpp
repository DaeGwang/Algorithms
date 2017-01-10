#include <stdio.h>
const int maxn = 10000;
int parent[maxn];
int rank[maxn];

void swap(int &p, int &q){
	int temp = p;
	p = q;
	q = temp;
}

void init(){
	for(int i=0; i<maxn; i++){
		rank[i] = 0;
		parent[i] = i;
	}
}

int find(int p){
	if(parent[p]==p) return p;
	else return parent[p]=find(parent[p]);
}

void uni(int p, int q){
	p = find(p);
	q = find(q);
	if(p==q) return;
	if(rank[p]<rank[q]) swap(p, q);
	parent[p] = q;
	if(rank[p]==rank[q]) rank[p]++;
}

int main()
{
    freopen("input.txt", "r", stdin);
    init();
    int a, b;
    uni(a, b);
    return 0;
}
