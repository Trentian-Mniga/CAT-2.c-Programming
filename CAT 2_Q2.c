i)An array in C programming language is a powerful data structure that allows users to store data elements required.

ii) int scores [2] [2];

    int scores [2] [2]={

    {65 , 92};
    {84 ; 92};

    };

iii) #include <stdio.h>

     int main(){

        int scores[2] [2]={{65,92} , {84,92}};

        for(int i=0; i<2 ; i++){

        for(int j=0; j<2; j++){

          printf("%d",scores[i][j]);

     }

     printf("\n");

     }

     return0;

     }