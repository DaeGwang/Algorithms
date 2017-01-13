const int maxn = 10000;

int queue[maxn];
int front = 0;
int rear = 0;

void push(int n){
	queue[rear++] = n;
}

int pop(){
	return queue[front++];
}

bool isEmpty(){
	return front>=rear;
}
