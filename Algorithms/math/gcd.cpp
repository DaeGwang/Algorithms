int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b, a % b);
}

int gcd(int a, int b){
	while (b != 0) {
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}
