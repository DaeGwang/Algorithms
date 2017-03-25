void sortM(int *d, int len){
	if(len<=1) return;
	int mid = len/2;
	int i = 0;
	int j = mid;
	int k = 0;
	int *buf = new int[len];
	sortM(d, mid);
	sortM(d+mid, len-mid);
	while(i<mid && j<len) buf[k++] = (d[i] < d[j] ? d[i++] : d[j++]);
	while(i<mid) buf[k++] = d[i++];
	while(j<len) buf[k++] = d[j++];
	for(int i=0; i<len; i++) d[i] = buf[i];
	delete[] buf;
}


sortM(d, n);
