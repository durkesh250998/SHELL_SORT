#include<stdio.h>
int main(){
    int a[6]={30,10,40,20,50,15};
    int n=6,temp=0,i,j,gap;
    for(gap=n/2;gap>=1;gap/=2){
        for(j=gap;j<n;j++){
            for(i=j-gap;i>=0;i=i-gap){
                if(a[i+gap]>a[i]){
                    break;
                }
                else{
                    temp=a[i];
                    a[i]=a[i+gap];
                    a[i+gap]=temp;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("\n%d\n",a[i]);
}}