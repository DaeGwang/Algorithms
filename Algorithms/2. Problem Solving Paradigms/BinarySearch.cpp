int binarySearch(const vector<int>& A, int x){
	int n = A.size();
	int left = -1, right = n;
	while(left + 1 < right){
		int mid = (left + right) / 2;
		if(A[mid] < x){
			left = mid;
		}
		else{
			right = mid;
		}
	}
	return right;
}
