class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
      vector<vector<int>> a,b;
      int n=img1.size();
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(img1[i][j]==1){
           a.push_back({i,j});
        }
        if(img2[i][j]==1){
            b.push_back({i,j});
        }
      }
     }
     unordered_map<int,int> mp;
     int maxoverlap=0;
     for(int i=0;i<a.size();i++){
        for(int k=0;k<b.size();k++){
            int j=0;
            int dx= b[k][j]-a[i][j];
            int dy= b[k][j+1]-a[i][j+1];
            int key=dx*100 + dy;
            mp[key]++;
            maxoverlap=max(maxoverlap,mp[key]);
       }
     }
     return maxoverlap;
    }
};