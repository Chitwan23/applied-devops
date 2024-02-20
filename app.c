
#include<stdio.h> 
void namaste();
void bonjour();

int main(){
char ch ;
  printf("enter i for indian and f for french: ");
  scanf("%c",&ch);
  if (ch=='i')
{ namaste();
}
else{
    bonjour();
}}
void namaste(){
    printf("Namaste");
}
void bonjour(){
    printf("Bonjour!!"); //changes from branch1
} 