class Solution {
  public:
    int power(int a,int b)
    {
        int result=1;
       while(b>0)
       {
           if(b%2!=0)
           {
               result=result*a;
               b=b-1;
           }
           else
           {
               a=a*a;
               b/=2;
           }
       }
       return result;
        
    }
    int reverseExponentiation(int n) {
        // code here
        int rev=0;
        int original=n;
        while(original)
        {
            int rem=original%10;
            rev=rev*10+rem;
            original/=10;
        }
        return power(n,rev);
    }
};