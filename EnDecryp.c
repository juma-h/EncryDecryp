#include <stdio.h>
#include<stdlib.h>
#include <string.h>

 
char data[50], temp;
int key, count;
char* c;


void getmessage()
{ 
      printf("Enter a String:\t");
      scanf("%[^\n]s", data);
}
 
void keyinput()
{
      printf("Enter a Key:\t");
      scanf("%d", &key);
      getchar();
}
 
void encryption()
{
      for(count = 0; data[count] != '\0'; count++)
      {
            temp = data[count];
            if(temp >= 'a' && temp <= 'z')
            {
                  temp = temp + key;
                  if(temp > 'z')
                  {
                        temp = temp - 'z' + 'a' - 1;
                  }
                  data[count] = temp;
            }
            else if(temp >= 'A' && temp <= 'Z')
            {
                  temp = temp + key;
                  if(temp > 'Z')
                  {
                        temp = temp - 'Z' + 'A' - 1;
                  }
                  data[count] = temp;
        }
      }
      
      
   printf("\nEncrypted Message:%s\n", data);
    c = strtok (data," " );
              while (c != NULL)
               {
                printf ("%s\n",c);
                 c = strtok (NULL, " ");
               } 
  
}
 
void decryption()
{
      for(count = 0; data[count] != '\0'; count++)
      {
            temp = data[count];
            if(temp >= 'a' && temp <= 'z')
            {
                  temp = temp - key;
                  if(temp < 'a')
                  {
                        temp = temp + 'z' - 'a' + 1;
                  }
                  data[count] = temp;
            }
            else if(temp >= 'A' && temp <= 'Z')
            {
                  temp = temp - key;
                  if(temp < 'A')
                  {
                        temp = temp + 'Z' - 'A' + 1;
                  }
                  data[count] = temp;
            }
             }
             c = strtok (data," ");
    while (c != NULL)
    {
        printf ("%s\n",c);
         c = strtok (NULL, " ");
    }
      printf("\nDecrypted Message:\t%s\n", data);
}


int main()
{
      int choice;
      getmessage();
      keyinput();
      
      printf("\n1. Encryption\n2. Decryption\n3. Exit\n");
            printf("\nEnter You Choice:\t");
            scanf("%d", &choice);
            
            switch(choice)
            {
                  case 1: encryption();
                          break;
                  case 2: decryption();
                          break;
                  case 3: exit(0);
                  default: printf("\nPlease select a correct option:\n");
            }
      
      printf("\n");
      return 0;
}