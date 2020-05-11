class Solution {
public:
void f(vector<vector<int>>& a,int i,int j,int nc,int x)
{
    if((i>=0)&&(i<a.size())&&(j>=0)&&(j<a[i].size()))
    {
        if((a[i][j]!=nc)&&(a[i][j]==x))
        {
            a[i][j]=nc;
            f(a,i+1,j,nc,x);
            f(a,i-1,j,nc,x);
            f(a,i,j+1,nc,x);
            f(a,i,j-1,nc,x);
        }
        else
        {
            return;
        }
    }
    else
    {
        return;
    }

}

vector<vector<int>> floodFill(vector<vector<int>>& v, int sr, int sc, int nc)
{
    int x=v[sr][sc];
    f(v,sr,sc,nc,x);
    return v;
}

};
