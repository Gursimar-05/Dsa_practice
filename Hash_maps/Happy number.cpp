class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        unordered_set<int> s;
        mp[0]=0;
        mp[1]=1;
        mp[2]=4;
        mp[3]=9;
        mp[4]=16;
        mp[5]=25;
        mp[6]=36;
        mp[7]=49;
        mp[8]=64;
        mp[9]=81;
        do{
        int res=0;
        while(n>0){
        int i=n%10;
          res+=mp[i];
          n=n/10;
        }
        n=res;
          if(s.count(n)!=0){
            return false;
        }else{
            s.insert(n);
        }
        }while(n!=1);
            return true;
        }
};