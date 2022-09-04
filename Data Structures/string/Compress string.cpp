string compressString(string str) {
  // Write your code here
  int n = str.length();
 string res = "";
  
  for(int i =0 ; i<str.length(); i++)
  {
    int count =1;
   res+= str[i];
    while(i+1<n and str[i+1] == res[res.length()-1])
    {
      count++;
      i++;
    }
    
    if(count>1)
      res+= to_string(count);
    
      
  }
  return res;
}

