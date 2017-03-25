vector<vector2> convex_hull(vector<vector2> P)
{
    int n = P.size(), k = 0;
    vector<vector2> H(2*n);
    sort(P.begin(), P.end());
    for (int i = 0; i < n; ++i) {
        while (k >= 2 && ccw(H[k-2], H[k-1], P[i]) <= 0) k--;
        H[k++] = P[i];
    }
 
    for (int i = n-2, t = k+1; i >= 0; i--) {
        while (k >= t && ccw(H[k-2], H[k-1], P[i]) <= 0) k--;
        H[k++] = P[i];
    }
 
    H.resize(k-1);
    return H;
}