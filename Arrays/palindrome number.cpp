class Solution {
public:
    bool isPalindrome(int x) {
      long int rev=0;
      int k=x;
      if(x<0){
        return false;
      }
      while(x!=0){
      rev=rev*10+(x%10);
      x=x/10;
    }
    if(rev==k){
        return true;
    }else{
        return false;
    }
    }
};