#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
using namespace std;

struct Lit_Tab
{
	string symbol;
	int val;
}LT[10];


int main() 
{
  string var1,var2,var3;
 
  int r,lc=0,n=0,i=0,j;
  int k=0,l=0;

  ifstream myfile ("s.txt");
  if (myfile.is_open())
  {
  		while(var2!= "END")
   		{ 
     
     		myfile>>var1;
			myfile>>var2;
			myfile>>var3;
        	
			int i=0,flag=0,flag1=0;
			string str,str1,str2;
			if(var2 == "START")
    		 {
					
       				 lc=stoi(var3)-1;
       			
    		 }
			
			 while (var3[i] != '\0')
			 {
               	if(var3[i] == ',')
                { 
						flag=1;
	                  	break;
				}
				else
		        {      
						str2=var3;
						
				}		
				i++;

			 }	
          	i=0;
			if(flag==1)
			{	
					while(var3[i] != ',') 
					{
	        		 	str += var3[i]; 
						i++;					
					}	
					int j=++i;				
					while (var3[j] != '\0') 
					{
    		   			str1 += var3[j]; 
						j++;					
					}
			}
        
            if(str1[0]=='=')
			{				
						LT[k].symbol=str1;   
       					LT[k].val=lc+n;
       					k++;
       					n++;						
        	}	
     		else 
        		lc++;      
     		if(var2== "DS" ||var2=="DC")
        		lc=lc+stoi(var3)-1;   
    		}//while end 
  

			cout<<"\nIndex\tLiterals Address\n";
			for(l = 0; l<k; l++)
				cout<<l<<"\t"<<LT[l].symbol<<"\t"<<LT[l].val<<endl;
		
            cout<<"\nPass 1 is completed\n";
      }
	  else 
		cout << "Unable to open file";

    }
