class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)
            return false;

        int palindrome_array[40] = {-1},count = 0;

        while(x>0)
            {
                int remainder = x % 10;
                x = x/10;
                palindrome_array[count]=remainder;
                count++;
            }

            int compare_reverse = count-1,flag =0;
            for(int i=0;i<count;i++)
                {

                    if(i==compare_reverse)
                        break;
                    if(palindrome_array[i]==palindrome_array[compare_reverse])
                        {
                            compare_reverse--;
                            flag = 0;
                        }
                    else
                        {
                            flag =1;
                            break;
                        }
                }
            if(flag == 1)
                return false;
            else
                return true;
    }
};