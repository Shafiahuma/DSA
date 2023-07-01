class Solution {
public:
    double Pow(double x, int n)
    {
        if(n==0)
          return 1;
        double temp=Pow(x,n/2);
        if(n%2==1)
          return temp*temp*x;
        return temp*temp;
    }
    double myPow(double x, int n) {
        int f=0;
        if (n == INT_MIN) {
            x = 1.0 / x;
            n = -(n + 1);  // Increment n by 1 to make it positive and within range
            return x * Pow(x, n);
        }
        if(n<0)
        {
           x=1.0/x;
           n=abs(n);
        }
        double ans=Pow(x,n);
        return ans;
    }
};