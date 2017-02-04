void sortC(int *d, int len){
	int max = d[0];
	for(int i=1; i<len; i++){
		if(max < d[i]) max = d[i];
	}
	int exp = 1;
	int *tmp = new int[len];
	while(max/exp > 0){
		int cnt[10];
		memset(cnt, 0, sizeof(cnt));
		for(int i=0; i<len; i++){
			cnt[d[i]/exp%10]++;
		}
		for(int i=1; i<len; i++){
			cnt[i] += cnt[i-1];
		}
		for(int i=len-1; i>=0; i--){
			tmp[--cnt[d[i]/exp%10]] = d[i];
		}
		for(int i=0; i<len; i++){
			d[i] = tmp[i];
		}
		exp *= 10;
	}
}


sortC(d, n);