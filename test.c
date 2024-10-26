#include <stdio.h>

void multiply(int a){
    for(int i = 2; i <= 16; i++){
        if (i == 10){continue;}
        else{ printf("%d * %d = %d\n", a , i ,i * a);}
    }}

void maxy(int a, int b){
    if (a < b){ printf("B = %d is Max", b);}
    else if( b < a){ printf("A = %d is Max", a);}
    else if (a == b){printf("They're Equal");}
    else{printf("Invalid Input");}
}

void oddy(int a){
    if ((a % 2) == 0){ printf("It's Even");}
    else if ((a % 2) != 0 ){ printf("It's Odd");}
    else{printf("Its null");}
}

void facse(int a){
    int b=1,i;
    for(i=1;i<=a;i++){ b = b*i; }
    printf("%d",b);
}

void simer(int p, int t, int r){
    printf("%d",(p*t*r)/100);
}

void arram(int a[], int size){
    int b=0;
    for(int i =0;i < size;i++){ b += a[i]; }
    printf("%d",b);
}

void patter(){
    int rows = 5;
    for(int i=0;i<=rows;i++){
        for(int j = 0;j<=i;j++){
           printf("* ");
    }}}

void primer(int a){
    if ((a == 2 || a == 3 || a == 5 || a == 7 || a == 11) || ((a - 1) % 6 == 0 || (a + 1) % 6 == 0)) { printf("It's Prime"); }
    else { printf("It's not Prime"); }
}

void fibbon(){
    int a=0,b=1,c;
    c = b + a;
    b = a;
    c = b;
}

void counn(int a){
    printf("%d\n", a);
    a -= 1; //for printing alternate order of questions just change the 1 to 2
    if (a > 0){ counn(a); }
}

int main(){
    char option;
    int arr[] = {1,2,3,4,5,6};

    printf("Please enter \n(M) for Multiplication \n(N) for Max of two numbers \n(O) for odd or even \n(F) for Factorial of a number \n(A) for Sum of Array \n(S) for Simple interest \n(P) for pattern prinitng \n(G) for Prime Number \n(C) for CountDown \nEnter your input: ");
    scanf("%c", &option);

   switch (option) {
        case 'M': multiply(5);                                                          break;
        case 'N': maxy(5, 6);                                                           break;
        case 'O': oddy(4);                                                              break;
        case 'F': facse(5);                                                             break;
        case 'S': simer(50,1000,2);                                                     break;
        case 'A': arram(arr, sizeof(arr)/sizeof(arr[0]));                               break;
        case 'P': patter();                                                             break;
        case 'G': primer(11);                                                           break;
        case 'C': counn(5);                                                             break;
        default: printf("Invalid option.\n");                                           break;

    }
    return 0;
}