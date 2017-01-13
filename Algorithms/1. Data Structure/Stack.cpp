const int maxn = 10000;

int stack[maxn];
int size = 0;

void push(int n){
	stack[size++] = n;
}
int pop(){
	return stack[--size];
}

bool isEmpty(){
	return size==0;
}
