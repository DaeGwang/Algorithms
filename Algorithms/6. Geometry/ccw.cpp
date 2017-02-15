struct Point{
    int x, y;
    Point(){}
    Point(int x, int y): x(x), y(y){}
};
 
ll ccw(Point a, Point b, Point c){
    return (a.x*b.y + b.x*c.y + c.x*a.y) - (a.y*b.x + b.y*c.x + c.y*a.x);
}