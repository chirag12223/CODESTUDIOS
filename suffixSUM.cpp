#include<iostream>
#include <climits>
#include <array>
using namespace std;
int* suffixSUM(int A[]){
        int k=0;
        for(int i=4;i>=0;i--){
            k+=A[i];
            A[i]=k;

        }return A;
}
int main(){
   int A[]={3, 4, -1, 2, 5};
      int *B=suffixSUM(A);
   for(int j=0;j<5;j++){
       cout<<B[j]<<" ";
   }


}
