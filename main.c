#include <stdio.h>
#include <stdlib.h>

int main(){

int A[4];

  for(int i = 0 ; i < 4 ; i++){
    scanf("%d", &A[i]);
                                 }
int box;
int n;
int a1 = 0 ,a2 = 0 , a3 = 0 , a4 = 0;

n = 0;

  while (A[0] != 0 && A[1] != 0 && A[2] != 0 && A[3] != 0){
     A[n]--;
     box = A[0];

  for(int i = 0; i < 3; i++){
     A[i] = A[i + 1];
                                                             }
     A[3] = box;

  if(n == 0){
     a1 = a1 + 1;
                                                                   }
  else if(n == 1){
    a2++;
                                                                       }
  else if(n == 2){
    a3++;
                                                                            }
  else if(n == 3){
    a4++;
                                                                                 }
    n++;

  if(n == 4){
    n = 0;
                                                                                         }
                                                                                                }
printf("%d %d %d %d", a1, a2, a3, a4);

return 0;
                                                                                                      }
