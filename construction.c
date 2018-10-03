#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dog{
  int age;
  char * name;
};

char * letters = "qwertyuiopasdfghjklzxcvbn";

char * pickRand(){
  return &letters[rand()%26];
}
  
struct Dog makeDog(){
  struct Dog Doggy;
  Doggy.age = rand()%18 + 2;
  Doggy.name = "ammy";
  return Doggy;
}

void printInfo(struct Dog x){
    printf("Name of Dog: %s\n", x.name);
    printf("Age of Dog: %d\n", x.age);
}

void changeInfo(struct Dog * x, int newAge, char * newName){
   x->age = newAge;
   x->name = newName;
}

int main(){
  struct Dog doggy  = makeDog();
  struct Dog * doggy_pointer = &doggy;
  printf("%s\n", doggy_pointer->name);
  printInfo(doggy);
  return 0;
}
