void sortI(int *a, int s, int e){
	for(int i=s; i<e; i++){
		int temp = a[i];
		int j = 0;
		for(j=i-1; j>=s && cmp(temp, a[j]); j--){
			a[j+1] = a[j];
		}
		a[j+1] = temp;
	}
}


sortI(d, 0, n);