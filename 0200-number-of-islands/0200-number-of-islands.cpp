#define pii pair<int,int>
class Solution {
public:
    map<pii,pii>parent;
    pii find(pii x){
        if(parent[x]==x) return x;
        return parent[x]=find(parent[x]);
    }
    bool _union(pii A, pii B){
        pii pA=find(A);
        pii pB=find(B);
        if(pA==pB) return false;
        parent[pA]=pB;
        return true;
    }
    int numIslands(vector<vector<char>>& grid) {
        int R=grid.size(), C=grid[0].size();
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                parent[{r,c}]={r,c};
            }
        }
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(grid[r][c]=='0') continue;
                if(r+1< R && grid[r+1][c]=='1') _union({r,c},{r+1,c});
                if(r>0 && grid[r-1][c]=='1') _union({r,c},{r-1,c});
                if(c+1<C && grid[r][c+1]=='1') _union({r,c},{r,c+1});
                if(c>0 && grid[r][c-1]=='1') _union({r,c},{r,c-1});
            }
        }
        set <pii> islands;
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(grid[r][c]=='1'){
                    islands.insert(find({r,c}));
                }
            }
        }
        return islands.size();
    }
};