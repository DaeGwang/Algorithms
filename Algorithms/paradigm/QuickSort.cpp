void sortQ(int *d, int l, int r){
	int i = 1;
	int j = r;
	int mid = d[(l+r)/2];
	while(i<=j){
		while(cmp(d[i], mid)) i++;//d[i]<mid
		while(cmp(mid, d[j])) j--;//mid<d[j]
		if(i<=j){
			swap(d[i++], d[j--]);
		}
	}
	if(i<r) sortQ(d, i, r);
	if(l<j) sortQ(d, l, j);
}


sortQ(d, 0, n-1);