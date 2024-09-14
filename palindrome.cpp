class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    // Your code goes here//
	
	 if(s.length()<=1)
	 return 1;
	 else if (s[0]!= s[s.length()-1])
	    return 0;
	   else
	   return isPalindrome(s.substr(1,s.length()-2));
	   
	    
	}

};
