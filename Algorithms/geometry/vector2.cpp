struct vector2{
    double x, y;
    int number;
    vector2(){ x=0, y=0, number=0; }
    vector2(double _x, double _y) : x(_x), y(_y){
        number = 0;
    }
    vector2(double _x, double _y, int num) : x(_x), y(_y), number(num){}
    bool operator ==(const vector2 &v){
        return x==v.x && y==v.y;
    }
    bool operator < (const vector2 &v) const{
        if(x != v.x) return x < v.x;
        else return y < v.y;
    }
    vector2 operator +(vector2 &v){
        return vector2(x+v.x, y+v.y);
    }
    vector2 operator -(vector2 &v){
        return vector2(x-v.x, y-v.y);
    }
    vector2 operator *(vector2 &v){
        return vector2(x*v.x, y*v.y);
    }
    double dot(const vector2& v){
        return x*v.x + y*v.y;
    }
    double cross(const vector2& v){
        return x*v.y - y*v.x;
    }
};
double ccw(vector2 a, vector2 b){
    return a.cross(b);
}
double ccw(vector2 p, vector2 a, vector2 b){
    return ccw(a-p, b-p);
}
bool cmp(vector2 a, vector2 b){
    return a.number < b.number;
}