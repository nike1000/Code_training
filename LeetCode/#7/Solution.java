public class Solution
{
    public int reverse(int x)
    {
        long rev = 0;
        long longx = x;
        boolean isNegtive = false;

        if(longx < 0)
        {
            longx = 0 - longx;
            isNegtive = true;
        }

        while(longx != 0)
        {
            rev = rev * 10 + longx % 10;
            longx /= 10;
        }

        if(rev > Integer.MAX_VALUE)
        {
            return 0;
        }

        return isNegtive ? 0 - (int)rev : (int)rev;
    }
}
