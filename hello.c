
// kivabe print kora jai

#include <stdio.h>
int main()
{
    printf("hello world \ni am  a developer \nnew line hobe");
    printf("hello world \t\t new line hobe");
    printf("\n\n");
    int zubair = 1000;
    float karim = 10.5;
    char habib = 's';
    printf("%d %0.1f %c" , zubair , karim , habib);

    // inpute 30% and 40% 

    int numOne , numTwo ;
    char p ;
    scanf("%d%% %d%%" , &numOne,&p,&numTwo,&p );
    scanf("%d%% %d%%" , &numOne,&numTwo );
    printf("%d%% %d%%" , numOne , numTwo);

    // long integer limition 
    int a = 1234567890;
    long long int b = 12345678912345678;
    float c = 3.1234567;
    double d = 3.123456789123456;
    printf("%d , %lld , %0.15f ,%0.15lf" , a , b , c , d);
    return 0;
}

//    \t -> new tab -> 4 space
//    \n -> new line
//    \\ -> 2 ber use korle 1 ber hobe -> spiceal case
//    %% -> 2 ber use korle 1 ber hobe -> spiceal case

// variable

// int = -100 , 100 , 30 ;
// float = .4 , 5.5;
// char = 'a' , 'A' , '@' ;
// bool =  true or false ;

// to print 
// int -> %d 
// float -> %f
// char -> %c

// memory (ram) -> int -> 4 byte
// memory (ram) -> float -> 4 byte
// integer limitation ( -10^9  10^9 )
// long long integer limitation ( -10^18  10^18 )