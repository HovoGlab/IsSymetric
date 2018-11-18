#include <iostream>
#include <string>
using namespace std;

int main()
{
  int number;
  cin>>number;
  string p =to_string(number);
  int length = p.length();
  if(length==1)
    {
        cout<<"Number is Symetric";
        return true;
    }
  if(length/2)
    {    
        int l = length-1;
        length = length/2;
        for(int i=0;i<length;++i )
           {   
              if(p[i]!=p[l])
                {   
                    cout<<"Number is Not Simetric";
                    return false;
                }
                --l;
                 
           }
           cout<<"Number is Symetric";
           return true;
           
    }
    else
    {
      int l = length-1;
      length = (length-1)/2;
      for(int i=0;i<length;++i)
         {
           if(p[i]!=p[l])
             {
               cout<<"Number is Not Simetric"; 
               return false;
             } 
             --l;
         }
           cout<<"Number is Not Simetric";
           return true;
    }

}
