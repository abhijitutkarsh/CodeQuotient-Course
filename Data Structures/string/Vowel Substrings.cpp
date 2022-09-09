
// ACID
// 0123
// 6

bool checkVowel(char c)
{
    if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c =='u')
    return true;

    return false;
}

int countVowelSubstr(string str) {
int count =0;
  for(int i=0 ; i<str.length() ; i++)
    {
        int incounting =0;
        for(int j =i; j<str.length() ;j++)
        {
            if(checkVowel(str[i]))
            {
                i++;
                incounting++;
            }
            else
            {
                break;
            }
        }
        count = max(count, incounting);
        
    }
    return count;
    
  }


