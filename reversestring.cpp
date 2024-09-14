class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        
        int i =0;
        int j=str.size()-1;
        while(j>i)
        {
            char ch = str[i];
            str[i]=str[j];
            str[j]= ch;
            i++;
            j--;
        }
        return str;
    }
};


