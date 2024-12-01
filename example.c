#include "rc4.h"
void printbin(int8 *input,const int16 size){
    int16 i;
    int8 *p;
    assert(size>0);
    for(i=size,p=input;i;i--,p++){
        if(!(i%2))
            printf(" ");
        printf("%.02x",*p);
    }
    printf("\n");
    return;
}
int main(){
  Arcfour *rc4;
  int16 skey,stext;
  char *key,*from,*encrp,*decrp;
  key=(char *)"arjun";
  from=(char *)"Kakashi Hatake";
  stext=strlen(from);
  skey=strlen(key);
  printf("INITIALIZING ENCRYPTION............");
//   rc4=rc4init(key,skey);
  printf("\ndone\n");
  printf("'%s'\n->",from);
//   encrp=rc4encrypt(from,stext);
  printbin((int8 *)key,skey);
  return 0;


}
