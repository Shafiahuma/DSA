
bool pal(string &s,int l, int r)
{
	if(l>=r)
        return true;
	if(s[l]!=s[r])
	    return false;
	return pal(s,l+1,r-1);
}
bool isPalindrome(string &s)
{
	int r=s.size()-1;
	 return pal(s,0,r);
}