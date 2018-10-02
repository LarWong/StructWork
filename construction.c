#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dog{
  int age;
  char * name;
};

struct Dog_tuple{
  struct Dog * pointer;
  struct Dog doggy;
};

char * letters = "qwertyuiopasdfghjklzxcvbn";

char pickRand(){
  return letters[rand()%26];
}
  
struct Dog makeDog(){
  struct Dog {(rand()%18 + 2); strcat(pickRand(), "ammy")}Doggy;
}

int main(){
  struct Dog doggy  = makeDog();
  struct Dog * doggy_pointer = &doggy;
  printf("%s", doggy_pointer->name);
  return 0;
}
