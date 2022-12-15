#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n = 200;
    int max_iterable = 200;//aqui se especifica cual sera el numero maximo que se usara como respuesta
    for(int i = 1;i<=n;i++){
        for(int a = 2;a<max_iterable;a++){
        for(int b = 2;b<max_iterable;b++){
            for(int c = 2;c<max_iterable;c++){
                int aux = a*a*a + b*b*b + c*c*c;
                if(i*i*i == aux && (a<b && b<c && a<c)){
                    printf("Cube = %i, Triple = (%i,%i,%i)\n",i,a,b,c);
                }
            }
        }
        // cout<<"entro";
    }
    }

    return 0;
}
