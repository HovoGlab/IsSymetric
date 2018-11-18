#include <iostream>
using namespace std;

bool is_repeat_numbers(int p)
{

   
   int arr[10]={0,1,2,3,4,5,6,7,8,9};
   int k = p;
        for(int m=0;m<5;m++)
            { 
               for(int j=0;j<10;j++)
                  { 
                         
                     if(arr[j]==k%10)
                     {   
                       arr[j]=-1;
                       k = k/10;
                      
                        if(m==4)
                        {
                          return true;   
                        }
                     }  
                     
                     
                     else if(m==4 && j==9)
                     {
                        return false ;
                     }
                       
                   }
                             
             }


}



int main()
{
    int count = 0;
    for(int i=10000;i<99999;++i)
    {
     if(is_repeat_numbers(i))
     {
     cout<<i<<endl;
     ++count;
     }
   
    }


cout<<count<<endl;
}
