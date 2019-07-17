#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int shift(char);

int main(int argc, string argv[])
{
    int found=1;
    //check whether key is valid
    if(argc!=2)
     {
      printf("not valid \n");
        found = 0;
        return 0;
     }
    
    if(strspn(argv[1],"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")!=strlen(argv[1]))
     {
        printf("not valid \n");
       found =0;
       return 0;
     }
  
    if(found)
     {
        
        char name[20];
       
        //Take string from user
        
        printf("enter a string");
        scanf("%s",name);
        printf("plain text %s \n",name);   
        printf("\n Cipher text :");
        int n=strlen(name);
        int p=strlen(argv[1]);
        int k[n];
        
        //Ciphering the text
          for(int i =0;i<n;i++)
        {
          for (int j =0;j<p;j++)
           {
            k[i] = shift(argv[1][j]);  
           }
        }
          
           for(int i =0;i<n;i++)
        {    
               printf("%i",k[i]);
              /*if(isupper(name[i]))
            {
             char c =(char)(((name[i]+k[i]-65)%26)+65);
             printf("%c",c);   
            } 
         if(islower(name[i]))
            {
             char v;
            v = (char)(((name[i]+k[i]-97)%26)+97);
             printf("%c",v);   
         }*/
         } 
        
    
    return 0;
}
}

int shift(char a)
{
    int i;
    i = (int)a;
    if(isupper(a))
      {
        i = i - 65;
      }
    if(islower(a))
      {
        i =i-97;
      }
    return i ;
}
