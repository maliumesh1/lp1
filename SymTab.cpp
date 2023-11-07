#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
using namespace std;

struct Sym_Tab
{
	string symbol;
	int val;
}ST[10];

int main () {
  	
  	string var1,var2,var3;
 
	int r,lc=0,n=0,i=0,p=0,q=0;
	

  ifstream myfile ("s.txt");
  if (myfile.is_open())
  {
  		while(var2!= "END")
   		{ 
     
     		 myfile>>var1;
			 myfile>>var2;
			 myfile>>var3;
        		
			 if(var2 == "START")
    		 {				
       				 lc=stoi(var3)-1;       			 
    		 }
						
			int t;
			if(var1!="-")
     		{   
				
				ST[p].symbol=var1;   
       			ST[p].val=lc+q;
       			p++;
       			q++;
							
     		}
     		else 
        		lc++;      
     		if(var2== "DS" ||var2=="DC")
        		lc=lc+stoi(var3)-1;   
    		}//while end 
  

			cout<<"\nIndex \t Symbol\tAddress ";
			cout<<"\n -------------------------------------------\n";
			for(p = 0; p<q; p++)
				cout<<p<<"\t"<<ST[p].symbol<<"\t"<<ST[p].val<<endl;
      
            cout<<"\nPass 1 is completed\n";
       


    }
	else 
		cout << "Unable to open file";

    }
