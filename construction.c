#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


struct Dog{
  int age;
  char name[50];
};

struct Dog makeDog(){
    srand(time(NULL));
  struct Dog Doggy;
  Doggy.age = rand()%18 + 2;
  char src = "abcdefghijklmnopqrstuvwxyz"[rand()%26];
  Doggy.name[0] = src;
  Doggy.name[1] = 0;
  printf("--START DEBUGGING--\n");
    printf("random char picked: %c\n", src);
    printf("dest picked: %s\n", Doggy.name);
  strcat(Doggy.name, "ammy");
    printf("random name picked: %s\n", Doggy.name);
    printf("--END DEBUGGING--\n");
    //strcpy(Doggy.name, "george");
  return Doggy;
}

void printInfo(struct Dog x){
    printf("Name of Dog: %s\n", x.name);
    printf("Age of Dog: %d\n", x.age);
}

void changeInfo(struct Dog * x, int newAge, char * newName){
   x->age = newAge;
   strcpy(x->name, newName);
}

int main(){
    printf("--START TESTING--\n");
  struct Dog doggy  = makeDog();
  printf("doggy.name address: %p\n", (doggy.name));
  struct Dog * doggy_pointer = &doggy;
  printf("pointer->name address: %s\n", (doggy_pointer->name));
    printf("\nINFO BEFORE CHANGING: \n");
  printInfo(doggy);
    char dest[50];
    char src = "abcdefghijklmnopqrstuvwxyz"[rand()%26];
    dest[0] = src;
    dest[1] = 0;
    printf("\nINFO AFTER CHANGING: \n");
  changeInfo(doggy_pointer, doggy_pointer->age + 200, strcat(dest, "anicus"));
  printInfo(doggy);
  printf("--END TESTING--\n");
  return 0;

}
