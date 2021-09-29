#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "disemvowel.h"

bool isVowel(char let){
	
  switch(let) {
  	case 'a':
	case 'A':
	  return true;
	  break;
	case 'e': 
        case 'E':
          return true;
	  break;
	case 'i': 
        case 'I':
          return true;
	  break;
	case 'o': 
        case 'O':
          return true;
	  break;
	case 'u': 
        case 'U':
          return true;
	  break;
	default: 
	  return false;
	  break;
  }
}


char *disemvowel(char *str) {
  
  char *str_no_const;
  int len, j;

  j = 0;

  len = strlen(str);

  str_no_const = (char*) calloc(len+1, sizeof(char));

  for(int i=0; i<len; ++i){
  	if(!isVowel(str[i])){
		str_no_const[j] = str[i];
		j++;
	}
  }
  
  str_no_const[len] = '\0';

  return str_no_const;

}
