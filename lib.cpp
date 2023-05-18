#include "lib.h"
bool riconoscimento (char a){
    int b;
    b=int(a);
    if ((b>=65)and(b<=90)){
        return true;
    }
    else if ((b>=97)and(b>=122)){
        return true;
    }
    else {
        return false;
    }
}

char conversione (char a){
    char b;
    int c;
    c= int (a);
    if ((c>=65)and(c<=90)){
        b= char(c+32);
    }
   else if ((c>=97)and(c<=122)) {
       b= char(c-32);
   }
   return b;
}
