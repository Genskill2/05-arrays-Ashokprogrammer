#include <stdio.h>
#include <cs50.h>
int main() {
int n;
int max[n];
n=get_int("Enter the value of n:\n");
for(int i=0;i<n;i++){
max[¡]=get_int("Enter number%i:",i);
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
int min[n];
for(int i=0;i<n;i++){
min[i]=get_int("Enter value of number%i:\n",i);
}
int minimum=min[0];
for(int i=0;i<n;i++){
if(min[i]<minimum){
minimum =min[i];
}}
printf("Minimum value is %i\n",minimum);
}

3)#include <stdio.h>
#include <cs50.h>
int main() {
int n;
n=get_int("How many numbers?\n");
int num[n];
for(int i=0;i<n;i++){
num[i]=get_int("Enter number%i\n",i);
}
int sum=0;
for(int i=0;i<n;i++){
sum=sum+num[i];
}
float average=(float)sum/n;
printf("Average of numbers is %f\n",average);
}
4)#include <stdio.h>
#include <cs50.h>
int mode(int a[],int n){
int maxValue=0,maxCount=0,i,j;
for(int I =0;i<n;i++){
int count=0;
for(int j=0;j<n;j++){
if (a[j]==a[i]){
++count;
}
if (count>maxCount){
maxCount=count;
maxValue =a[i];
}}
return maxValue;
}
int main() {
int n;
n= get_ int("Enter value of n:\n");
  int a[n];
for(int i=0;i<n;i++){
a[i]= get_int( "number%i:",i);
}
printf("Mode is %d",mode(a,n));
return 0;
}
5)#include <stdio.h>
#include <cs50.h>
Void Primefactors(int num){
int count;
for(count=0;num>1;count++){
while(num%count==0){
Printf("%d",count);
num=num/count;
}
}
Printf("\n");
}
int main() {
int num;
num=get_int("Enter value of n:");

Printfactors(num);
return 0;
}


