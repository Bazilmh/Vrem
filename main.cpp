#include <cstdlib>
#include <iostream>
#include <string.h>

//to remove shortcut virus   
//commmit

using namespace std;

char ch[80]={"attrib -h -r -s /s /d "},del[20] ={"del "};

int main(int argc, char *argv[])
{
    system("color 0A");
    cout<<endl<<"-----++<[ Vrem by AMB786 ]>++-----\n"<<endl; 
    cout<<argv[0]<<endl;
    cout<<argv[1]<<endl;
    start:
    cout<<"Enter your Driveletter to continue..."<<endl;
    cin>>ch[22];
    del[4]=ch[22];
    strcat(del,": *.lnk");
    del[6] = 92;
    if(isalpha(ch[22]))
   {
     if(ch[22] > 97 && ch[22] < 122 )                               
    {
     cout<<"Enter driveletter in CAPS !"<<endl<<endl;
     goto start;           
   }
    else
    if(ch[22] > 65 && ch[22] < 90 )                             
    {
              
    ch[23] = ':'; ch[24] = 92;ch[25] = '*';ch[26]='.';ch[27]='*';
    cout<<"Removing attributes..."<<endl;
    system(ch);
    cout<<"removing junk files..."<<endl;
    system(del);
    cout<<"process completed."<<endl;
    system("pause");  
   }
   else
   {cout<<"Enter a valid driveletter."<<endl<<endl; goto start;}
   
   
    
   
   }
   else
   {cout<<"Enter a valid driveletter."<<endl<<endl; goto start;}
   
   return 100;
    
    
    
}
