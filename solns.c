1)#include <stdio.h>
#include <cs50.h>
int main() {
int n;
int max[n];
n=get_int("Enter the value of n:\n");
for(int i=0;i<n;i++){
max[¡]=get_int("Enter number%i:");
}
int maximum=max[0];
for(int i=0;i<n;i++){
if(max[i]>maximum){
maximum=max[i];
}
}
Printf("maximum value is %i\n",maximum);
}
2)#include <stdio.h>
#include <cs50.h>
int main() {
int n;
n=get_int("Enter value of n:\n");
int min[];
for(int i=0;i<n;i++){
min[i]=get_int("Enter value of number%i:\n",i);
}
int minimum=min[0];
for(int i=0;i<n;i++){
if(min[i]<minimum){
minimum =min[i;
}}
printf("Minimum value is %i\n",minimum);
}

