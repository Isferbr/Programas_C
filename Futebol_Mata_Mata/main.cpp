#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{

    for(int i = 0; i <= 16; i++){
        for(int j = i + 1; j <= 16; j++){
            //if(j == i + 1 && i != j)
            if(i%j != 1 && j == i + 1)
            printf("[%d][%d] \n", i,j);
        }
    }
    return 0;
}
