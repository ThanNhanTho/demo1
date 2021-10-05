#include<stdio.h>
#include<math.h>

void ptbac2(){
    float a, b, c;
    
    if(a==0){
        if(b==0 && c==0){
            printf("Phuong trinh vo so nghiem");
        }
        if(b==0 && c!=0){
            printf("Phuong trinh vo nghiem");
        }
        if(b!=0){
            printf("Phuong trinh có mot nghiem: %f", -c/b);
        }
    }
    
    if(a!=0){
    float x1, x2;
    float delta = (b*b - 4*a*c);
    if (delta==0){
        printf("Phuong trinh co nghiem kep: x1 = x2 = %f", -b/(2*a));
    }else if (delta<0){
        printf("Phuong trinh vo nghiem");
    }
    else{
        printf("Phuong trinh co 2 nghiem phan biet: ");
        printf("x1 = %f\n", (-b + sqrt(delta))/(2*a));
        printf("x2 = %f", (-b - sqrt(delta))/(2*a));
    }

    }

    
}
int main(){
    float a, b, c;
    printf("He so a: ");
    scanf("%f", &a);
    printf("He so b: ");
    scanf("%f", &b);
    printf("He so c: ");
    scanf("%f", &c);
    ptbac2();
    return 0;
}