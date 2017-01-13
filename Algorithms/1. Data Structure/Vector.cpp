#include <stdio.h>
#include <stdlib.h>
#include <cstdio>

template <typename T>
struct vector{
	vector();
	~vector();
    T *s;
    void push_back(T n);
    void pop_back();
    unsigned int size();
    T& operator[](size_t index);
    vector<T> & operator = (const vector<T> &);
private:
    unsigned int _size;
    unsigned int _capacity;
};

template <typename T>
vector<T>::vector(){
    _size = 0;
    _capacity = 1;
    s = 0;
    //s = (T*)malloc(sizeof(T)*_size);
}

template <typename T>
vector<T>::~vector(){
    free(s);
}

template <typename T>
void vector<T>::push_back(T n){
	if(++_size>=_capacity){
		_capacity*=2;
		s = (T*)realloc(s, sizeof(T)*(_capacity));
	}
	s[_size-1]=n;
}

template <typename T>
void vector<T>::pop_back(){
	if(_size==0) return;
	_size--;
}

template <typename T>
unsigned int vector<T>::size(){
	return _size;
}

template <typename T>
T& vector<T>::operator[](size_t index){
	return s[index];
}

int main(){
    freopen("input.txt", "r", stdin);
    int n, num;
    scanf("%d", &n);
    vector<int> v;
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        v.push_back(num);
    }
    for(int i=0; i<(int)v.size(); i++){
        printf("%d\n", v[i]);
    }
    return 0;
}
